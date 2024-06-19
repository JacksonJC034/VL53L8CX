#include "serial_port_comm.hpp"

#define Uint unsigned int
#define Uchar unsigned char 

using namespace std;

SerialPortComm::SerialPortComm() :
	m_PortFd(0),m_PortState(false)
{
	memset(this->m_SendBuf, 0, 1024);
	memset(this->m_AcceptBuf, 0, 1024);
	//make_shared<RoboxControlPubNode<HallInfo>>("/rbot/pub_hall_info_topic","robox_hall_pub_node",true,50ms);
	//pubHallNode = make_shared<RoboxControlPubNode<HallInfo>>("/rbot/pub_hall_info_topic","robox_hall_pub_node",false,50ms); //发布手动操作节点
	//lisHallNode = make_shared<RoboxControlLisNode<HallInfo>>("/rbot/pub_hall_info_topic","robox_hall_lis_node");

// 	mutex m;
 	
// 	std::thread* t1 = new thread([&](){
// 	while (1)
// 	{
// 		lock_guard<mutex> gaud(m);
		
// 		//cout << "1111" << endl;
  		
// 		//hallInfo.f1 = i--;
// 		printf("发布 %d %d %d %d %d %d %d %d, %d %d %d %d  \n",hallInfo.uid7,hallInfo.uid6,hallInfo.uid5,hallInfo.uid4,hallInfo.uid3,hallInfo.uid2,hallInfo.uid1,
//             hallInfo.uid0,hallInfo.f1,hallInfo.f2,hallInfo.f3,hallInfo.f4);
		
//    		//设置数据
//   		//pubHallNode->setData(hallInfo);
  		
// 		rclcpp::spin_some(pubHallNode);

// 		usleep(100000);
// 	}
	
//   });

//   t1->detach();
}

SerialPortComm::~SerialPortComm()
{

}

//__uint8_t SendBuffer[100];
//int SendDataLen = 0;
//__uint8_t ReceiveBuff[100];
//int ReceiveDataLen = 0;

/*
	打开串口
	eg "/dev/ttymxc5"
*/
bool SerialPortComm::operPort(std::string serialPortPath)
{
	if(serialPortPath == "")
	{
		m_PortState = false;
		return false;
	}

	m_PortFd = open(serialPortPath.c_str(), O_RDWR | O_NOCTTY /*| O_NDELAY*/); // O_NDELAY
	if (m_PortFd <= 0)
	{
		cout << "open " << m_PortFd << " failed!" << endl;
		m_PortState = false;
		return false;
	}

	std::cout << "serialPortPath = open success" << serialPortPath << std::endl;

	// struct termios opt;
	// opt.c_lflag |= CLOCAL | CREAD;
	// tcgetattr(m_PortFd, &opt);
	// // cfsetispeed(&opt, B19200);
	// // cfsetospeed(&opt, B19200);
	// opt.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
	// opt.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
	// opt.c_oflag &= ~(OPOST);
	// opt.c_cflag &= ~(CSIZE | PARENB | CSTOPB);
	// opt.c_cflag |= CS8;

	// opt.c_cc[VMIN] = 0;
	// opt.c_cc[VTIME] = 1;
	// tcflush(m_PortFd, TCIOFLUSH);

	// if (tcsetattr(m_PortFd, TCSANOW, &opt) < 0)
	// {
	// 	cout << "connect " << m_PortFd << " failed" << endl;
	// 	return false;
	// }
	// cout << "open " << m_PortFd << " successed!" << endl;

	m_PortState = true;
	return true;
}

/*
	设置串口属性：
	m_PortFd: 文件描述符，在类中维护
	nSpeed: 波特率
	nBits: 数据位
	nEvent: 奇偶校验
	nStop: ֹͣ停止位
*/
bool SerialPortComm::setPortProperty(int nSpeed, int nBits, char nEvent, int nStop)
{
	struct termios newtio, oldtio;

	/*保存测试现有串口参数设置，在这里如果串口号等出错，会有相关的出错信息*/
	if (tcgetattr(m_PortFd, &oldtio) != 0)
	{
		perror("SetupSerial 1");
		printf("tcgetattr( m_PortFd,&oldtio) -> %d\n", tcgetattr(m_PortFd, &oldtio));

		m_PortState = false;
		return false;
	}
	bzero(&newtio, sizeof(newtio));

	/**/
	// newtio.c_lflag |= CLOCAL | CREAD;
	// tcgetattr(m_PortFd, &newtio);

	/*步骤一，设置字符大小*/
	newtio.c_cflag |= CLOCAL | CREAD;
	newtio.c_cflag &= ~CSIZE;
	//newtio.c_cflag &= ~(CSIZE | PARENB | CSTOPB);
	
	/*新添加的位置*/
	newtio.c_lflag  &= ~(ICANON | ECHO | ECHOE | ISIG);
    newtio.c_oflag  &= ~OPOST;


	/*设置数据位*/
	switch (nBits)
	{
	case 7:
		newtio.c_cflag |= CS7;
		break;
	case 8:
		newtio.c_cflag |= CS8;
		break;
	}

	/*设置奇偶校验位*/
	switch (nEvent)
	{
	case 'o':
	case 'O': // 奇校验
		newtio.c_cflag |= PARENB;
		newtio.c_cflag |= PARODD;
		newtio.c_iflag |= (INPCK | ISTRIP);

		break;

	case 'e':
	case 'E': // 偶校验
		newtio.c_iflag |= (INPCK | ISTRIP);
		newtio.c_cflag |= PARENB;
		newtio.c_cflag &= ~PARODD;

		break;

	case 'n':
	case 'N': // 无奇偶校验位
		newtio.c_cflag &= ~PARENB;

		break;
	default:
		break;
	}

	/*设置波特率*/
	switch (nSpeed)
	{
	case 2400:
		cfsetispeed(&newtio, B2400);
		cfsetospeed(&newtio, B2400);

		break;
	case 4800:
		cfsetispeed(&newtio, B4800);
		cfsetospeed(&newtio, B4800);

		break;
	case 9600:
		cfsetispeed(&newtio, B9600);
		cfsetospeed(&newtio, B9600);

		break;
	case 115200:
		cfsetispeed(&newtio, B115200);
		cfsetospeed(&newtio, B115200);

		break;
	case 460800:
		cfsetispeed(&newtio, B460800);
		cfsetospeed(&newtio, B460800);

		break;
	case 921600:
		cfsetispeed(&newtio, B921600);
		cfsetospeed(&newtio, B921600);

		break;
	default:
		cout << "无对应波特率,已设置默认9600" << endl;
		cfsetispeed(&newtio, B9600);
		cfsetospeed(&newtio, B9600);

		break;

	}

	/*设置停止位*/
	if (nStop == 1)
	{
		newtio.c_cflag &= ~CSTOPB;
	}
	else if (nStop == 2)
	{
		newtio.c_cflag |= CSTOPB;
	}

	/*设置等待时间和最小接收字符*/
	newtio.c_cc[VTIME] = 0;
	newtio.c_cc[VMIN] = 0;


	/*处理未接收字符*/
	tcflush(m_PortFd, TCIFLUSH);

	/*激活新配置*/
	if ((tcsetattr(m_PortFd, TCSANOW, &newtio)) != 0)
	{
		perror("com set error");
		m_PortState = false;
		return false;
	}

	printf("set port success port = %d !\n",m_PortFd);

	m_PortState = true;
	return true;
}


/*
	设置要发送的数据：
	buf 传入数据
	bufLen 传入数据长度
*/
void SerialPortComm::setSendData(Uchar* buf,int bufLen)
{
	if(buf == nullptr)
	{
		printf("封装的数据不能为空\n");
		return;
	}
	if(bufLen <= 0)
	{
		printf("传入的数据的长度有误 buflen = %d\n",bufLen);
		return;
	}

	//设置数据之前将sendBuf清空
	memset(m_SendBuf, 0, 1024);
	this->m_SendBufLen = 0;

	//拷贝数据和数据长度
	memcpy(m_SendBuf,buf,bufLen);
	this->m_SendBufLen = bufLen; 
	
	
	// printf("sendBuf = ");
	// for (int i = 0; i < this->m_SendBufLen; i++)
	// {
	// 	printf("%x ", this->m_SendBuf[i]);
	// }
	// printf("\nsendBufLen = %d\n",m_SendBufLen);
}

/*
	解析接收到的数据	
	写成虚函数，读取不同串口设备，接受到的数据不同，自定义设备类继承串口类，重写这个函数
*/
// int SerialPortComm::parseAcceptData(void* para)
// {

// }

//发送数据
int SerialPortComm::writeData(const char *data, size_t size)
{
	int ret = write(m_PortFd, data, size);
    if (ret < 0) 
	{
        perror("writeData");
        tcflush(m_PortFd, TCOFLUSH);
    }

    return ret;
}

//接受数据 data 传出参数
int SerialPortComm::readData(char *data, size_t size)
{
	size_t read_left = size;
    size_t read_size = 0;
    char *read_ptr = data;
    struct timeval timeout = {5, 0};

    memset(data, 0, size);

    fd_set rfds;
    //while (m_PortState) 
	{
        FD_ZERO(&rfds);
        FD_SET(m_PortFd, &rfds);
        timeout.tv_sec = 5;
        timeout.tv_usec = 0;

        if (read_left == 0)
		{
			//break;
			return - 1;
		}
            

        switch (select(m_PortFd+1, &rfds, NULL, NULL, &timeout)) 
		{
        case -1:
            perror("select()");
            break;
        case 0:
            perror("timeout and retry");
            break;
        default:
            if (FD_ISSET(m_PortFd,&rfds)) 
			{
                read_size = read(m_PortFd, read_ptr, read_left);
                if (read_size == 0)
                    break;

                read_ptr += read_size;
                read_left -= read_size;
            }
        }
    }

    return read_size;
}

// 读写串口
int SerialPortComm::readWirtePort(int mode,int ms,void* para)
{
	int ret = -1;
	switch(mode)
	{
		case SendResponse:
		{
			//发送响应模式
			ret = sendResponse(ms,para);

		}
		break;
		case ContinuousAccept:
		{
			//连续接受模式
			ret = continuousAccept(ms);
		}
		break;
		case SendContinuousAccept:
		{
			//发送一次 连续响应模式
			sendContinuousAccept();
		}
		break;
	}

	return ret;
}

// 判断串口状态
bool SerialPortComm::isPortState()
{
	return m_PortState;
}

// 关闭串口
void SerialPortComm::closePort()
{
	m_PortState = false;
	close(m_PortFd);
}


static const unsigned char auchCRCHi[] = {
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40
};
static const unsigned char auchCRCLo[] = {
	0x00, 0xC0, 0xC1, 0x01, 0xC3, 0x03, 0x02, 0xC2, 0xC6, 0x06, 0x07, 0xC7,
	0x05, 0xC5, 0xC4, 0x04, 0xCC, 0x0C, 0x0D, 0xCD, 0x0F, 0xCF, 0xCE, 0x0E,
	0x0A, 0xCA, 0xCB, 0x0B, 0xC9, 0x09, 0x08, 0xC8, 0xD8, 0x18, 0x19, 0xD9,
	0x1B, 0xDB, 0xDA, 0x1A, 0x1E, 0xDE, 0xDF, 0x1F, 0xDD, 0x1D, 0x1C, 0xDC,
	0x14, 0xD4, 0xD5, 0x15, 0xD7, 0x17, 0x16, 0xD6, 0xD2, 0x12, 0x13, 0xD3,
	0x11, 0xD1, 0xD0, 0x10, 0xF0, 0x30, 0x31, 0xF1, 0x33, 0xF3, 0xF2, 0x32,
	0x36, 0xF6, 0xF7, 0x37, 0xF5, 0x35, 0x34, 0xF4, 0x3C, 0xFC, 0xFD, 0x3D,
	0xFF, 0x3F, 0x3E, 0xFE, 0xFA, 0x3A, 0x3B, 0xFB, 0x39, 0xF9, 0xF8, 0x38,
	0x28, 0xE8, 0xE9, 0x29, 0xEB, 0x2B, 0x2A, 0xEA, 0xEE, 0x2E, 0x2F, 0xEF,
	0x2D, 0xED, 0xEC, 0x2C, 0xE4, 0x24, 0x25, 0xE5, 0x27, 0xE7, 0xE6, 0x26,
	0x22, 0xE2, 0xE3, 0x23, 0xE1, 0x21, 0x20, 0xE0, 0xA0, 0x60, 0x61, 0xA1,
	0x63, 0xA3, 0xA2, 0x62, 0x66, 0xA6, 0xA7, 0x67, 0xA5, 0x65, 0x64, 0xA4,
	0x6C, 0xAC, 0xAD, 0x6D, 0xAF, 0x6F, 0x6E, 0xAE, 0xAA, 0x6A, 0x6B, 0xAB,
	0x69, 0xA9, 0xA8, 0x68, 0x78, 0xB8, 0xB9, 0x79, 0xBB, 0x7B, 0x7A, 0xBA,
	0xBE, 0x7E, 0x7F, 0xBF, 0x7D, 0xBD, 0xBC, 0x7C, 0xB4, 0x74, 0x75, 0xB5,
	0x77, 0xB7, 0xB6, 0x76, 0x72, 0xB2, 0xB3, 0x73, 0xB1, 0x71, 0x70, 0xB0,
	0x50, 0x90, 0x91, 0x51, 0x93, 0x53, 0x52, 0x92, 0x96, 0x56, 0x57, 0x97,
	0x55, 0x95, 0x94, 0x54, 0x9C, 0x5C, 0x5D, 0x9D, 0x5F, 0x9F, 0x9E, 0x5E,
	0x5A, 0x9A, 0x9B, 0x5B, 0x99, 0x59, 0x58, 0x98, 0x88, 0x48, 0x49, 0x89,
	0x4B, 0x8B, 0x8A, 0x4A, 0x4E, 0x8E, 0x8F, 0x4F, 0x8D, 0x4D, 0x4C, 0x8C,
	0x44, 0x84, 0x85, 0x45, 0x87, 0x47, 0x46, 0x86, 0x82, 0x42, 0x43, 0x83,
	0x41, 0x81, 0x80, 0x40
};

//CRC计算法：
unsigned int SerialPortComm::CRC16_Modbus(volatile Uchar* puchMsg, Uint usDataLen, Uchar* bufCrc)
{
	Uchar uchCRCHi = 0xFF;
	Uchar uchCRCLo = 0xFF;
	Uint uIndex;
	while (usDataLen--) {
		uIndex = uchCRCHi ^ *puchMsg++;
		uchCRCHi = uchCRCLo ^ auchCRCHi[uIndex];
		uchCRCLo = auchCRCLo[uIndex];
	}

	bufCrc[0] = uchCRCHi;
	bufCrc[1] = uchCRCLo;
	return (uchCRCHi << 8 | uchCRCLo);
}

//请求响应模式需要在循环中
int SerialPortComm::sendResponse(int ms,void* para)
{
	// 如果没有设置发送数据，直接跳出循环
	if (m_SendBuf == nullptr || m_SendBuf == 0)
	{
		cout << "sendbuf is not nullptr" << endl;
		return -3;
	}

	fd_set fdsets;
	FD_ZERO(&fdsets);
	FD_SET(m_PortFd, &fdsets);
	tcflush(m_PortFd, TCIOFLUSH);

	// 设置select等待时间
	struct timeval time;
	time.tv_sec = 0;
	time.tv_usec = 800000; // 800ms
	memset(m_AcceptBuf,0,1024);

	write(m_PortFd, m_SendBuf, m_SendBufLen);
	//usleep(1000);
	//int ret = select(m_PortFd + 1, &fdsets, nullptr, nullptr, &time);
	// if (ret <= 0)
	// {
	// 	printf("等待时间无数据 ret = %d\n", ret);
		
	// 	return -1;
	// }

	// 需要做处理
	//usleep(ms); // 微妙 //bms ms = 150000

	// m_AcceptBufLen = read(m_PortFd, m_AcceptBuf, 1024);
	// //printf("m_AcceptBufLen = %d\n", m_AcceptBufLen); // 打印接收的数据长度

	// // 解析数据
	// int flag = parseAcceptData(para);

	// //解析完清空数组
	// memset(m_AcceptBuf, 0, sizeof(m_AcceptBuf));
	
	
	int flag = -1;

	switch (select(m_PortFd + 1, &fdsets, nullptr, nullptr, &time))
	{
	case -1:
		perror("select error");
		break;
	case 0:
		perror("timeout and retry");
		break;
	default:
		if (FD_ISSET(m_PortFd, &fdsets))
		{
			usleep(ms); // 微妙 //bms ms = 150000
			while ((m_AcceptBufLen = read(m_PortFd, m_AcceptBuf, 256)) > 0)
			{
				// 解析数据
				flag = parseAcceptData();
			}
		}
	}

	memset(m_AcceptBuf, 0, sizeof(m_AcceptBuf));

	return flag;
}



//连续接受
int SerialPortComm::continuousAccept(int ms)
{
	fd_set fdsets;
	FD_ZERO(&fdsets);
	FD_SET(m_PortFd, &fdsets);
	tcflush(m_PortFd, TCIOFLUSH);

	// 设置select等待时间
	struct timeval time;
	time.tv_sec = 0;
	time.tv_usec = 800000;

	int ret = select(m_PortFd + 1, &fdsets, nullptr, nullptr, &time);
	if (ret <= 0)
	{
		printf("等待时间无数据 ret = %d\n", ret);
		// isState = false;
		// break;
		return -1; // 无响应数据返回-1
		// continue;
	}
	// 需要做处理
	usleep(ms); // 微妙 1000微妙 = 1 ms 毫秒

	m_AcceptBufLen = read(m_PortFd, m_AcceptBuf, 1024);
	// printf("m_AcceptBufLen = %d\n", m_AcceptBufLen); // 打印接收的数据长度

	int flag = -1;
	// 解析数据
	flag = parseAcceptData();
	// 解析完清空数组
	memset(m_AcceptBuf, 0, sizeof(m_AcceptBuf));

	return flag;

	// while ((m_AcceptBufLen = read(m_PortFd, m_AcceptBuf, 128))> 0)
	// {
	// 	printf("m_AcceptBufLen = %d\n", m_AcceptBufLen); // 打印接收的数据

	// 	//解析数据
	// 	parseAcceptData();
	// }

				
	//}
}

// 发送连续接受(无意义暂时忽略)
void SerialPortComm::sendContinuousAccept(bool flag)
{
	(void)flag;
	fd_set fdsets;
	FD_ZERO(&fdsets);
	FD_SET(m_PortFd, &fdsets);
	tcflush(m_PortFd, TCIOFLUSH);

	while(1)
	{
		// 设置select等待时间
		struct timeval time;
		time.tv_sec = 3;
		time.tv_usec = 500;

		if (m_SendBufLen != 0)
		{
			write(m_PortFd, m_SendBuf, m_SendBufLen);
			memset(m_SendBuf, 0, 1024);
			m_SendBufLen = 0;
		}
		// i = 0;

		// usleep(100000);
		int ret = select(m_PortFd + 1, &fdsets, nullptr, nullptr, &time);
		if (ret <= 0)
		{
			printf("等待时间无数据 ret = %d\n", ret);
			
			return;
		}
		// 需要做处理
		usleep(1000); // 微秒
		// m_AcceptBufLen = 29;
		while ((m_AcceptBufLen = read(m_PortFd, m_AcceptBuf, 128)) > 0)
		{
			printf("m_AcceptBufLen = %d\n", m_AcceptBufLen); // 打印接收的数据长度
			// 解析数据
			parseAcceptData();
		}

		// RS485Gate.ReceiveResponse(ReceiveBuff, len);
		// usleep(500000);
		// RS485Gate.SendResponse(SendBuffer, len);
		}
	
}
