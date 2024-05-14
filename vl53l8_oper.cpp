#include "vl53l8_oper.hpp"

using namespace std;
using namespace std::chrono_literals;
CVl53l8Oper::CVl53l8Oper(std::string portName)
{
    // cutils_ = make_shared<CUtils>();
    memset((void*)tof_data,0,sizeof(tof_data));
    if(portName.c_str() != nullptr)
    {
        serialportFd = OpenPort(portName);
        if(serialportFd > 0)
        {
            cout << portName << " 串口打开成功" << endl;
        }
        else{
            cout << portName << " 串口打开失败" << endl;
            return ;
        }
                        // std::make_shared<std::thread>(std::bind(&CLeadshineCanopenOp::sdo_thread,this));
        seiralThread = std::make_shared<std::thread>(bind(&CVl53l8Oper::read_vl53l8_thread,this,serialportFd));
        seiralThread->detach();
    }
    else{
        cout << "请输写入串口号" << endl;
    }
}

CVl53l8Oper::~CVl53l8Oper()
{
    if(serialportFd > 0)
    {
        close(serialportFd);
        serialportFd=0;
    }
}

int CVl53l8Oper::OpenPort(std::string port)
{
	int PortFd = open(port.c_str(), O_RDWR|O_NOCTTY);
	if (PortFd <= 0)
	{
		cout << "open " << port << " failed!" << endl;
		return -1;
	}
	struct termios opt;
	opt.c_lflag |= CLOCAL | CREAD;
	tcgetattr(PortFd, &opt);
	cfsetispeed(&opt, B115200);
	cfsetospeed(&opt, B115200);
	opt.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
	opt.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
	opt.c_oflag &= ~(OPOST);
	opt.c_cflag &= ~(CSIZE | PARENB | CSTOPB);
	opt.c_cflag |= CS8;

	opt.c_cc[VMIN] = 0;
	opt.c_cc[VTIME] = 100;
	tcflush(PortFd, TCIOFLUSH);
	if (tcsetattr(PortFd, TCSANOW, &opt) < 0)
	{
		cout << "connect " << port << " failed" << endl;
		return -1;
	}
	cout << "open " << port << " successed!" << endl;
	return PortFd;
}

void CVl53l8Oper::read_vl53l8_thread(int fd)
{
    uint8_t slave_id=1;
    uint16_t send_length=0;
    uint16_t recv_length=0;
    while (1)
    {
        send_length = generate_resquest(serial_send_buffer,slave_id);
        write(fd,serial_send_buffer,send_length);
        tcflush(fd,TCIOFLUSH);
        recv_length = read(fd,serial_recv_buffer,120);
        if(recv_length>0)
        {
            parse_response(serial_recv_buffer,recv_length, slave_id);
        }
        else{//获取数据失败
            cout << "获取数据失败" << endl;
        }
        slave_id++;
        if(slave_id>4)slave_id=1;
        std::this_thread::sleep_for(10ms);
    }
}

int CVl53l8Oper::generate_resquest(uint8_t *buf,int id)
{
    int len=0;
    buf[0]= id;     //地址
    buf[1]=0x03;    //功能码
    buf[2]=0x00;    //起始地址,2字节
    buf[3]=0x00;    
    buf[4]=0x00;    //寄存器数量，2字节
    buf[5]=0x40;
    // uint16_t crc = cutils_->CRC16_Modbus(buf,6);
    // buf[6]=crc&0xff;
    // buf[7]=(crc>>8)&0xff;
    len = 8;
    return len;
}

int CVl53l8Oper::parse_response(uint8_t *buf,int len,int id)
{  
    if(buf[0]!=id)return -1;
    if(buf[1]!=0x03) return -1;
    if(buf[2]!=128) return -1;
    // uint16_t crc = cutils_->CRC16_Modbus(buf,131);
    // if(crc&0xff!=buf[131] || (crc>>8)&0xff!=buf[132]) return -1;
    mutex_cp.lock();
    memcpy(tof_data,buf+3,128);
    mutex_cp.unlock();
    return 1;
}

int CVl53l8Oper::getTof(uint16_t *buf)
{
    mutex_cp.lock();
    memcpy(buf,tof_data,128);
    mutex_cp.unlock();
    return 1;
}
