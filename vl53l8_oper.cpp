#include "vl53l8_oper.hpp"
#include <chrono>
#include <iostream>
#include <thread>

using namespace std;
using namespace std::chrono_literals;

uint8_t SLAVE_ID1 = 1;
uint8_t SLAVE_ID2 = 2;

static const uint8_t auchCRCHi[] = { 
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
 
static const uint8_t auchCRCLo[] = { 
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

uint16_t CVl53l8Oper::CRC16_Modbus(volatile uint8_t *puchMsg, uint16_t usDataLen) {
    uint8_t uchCRCHi = 0xFF;
    uint8_t uchCRCLo = 0xFF;
    uint16_t uIndex;

    while (usDataLen--) {
        uIndex = uchCRCHi ^ *puchMsg++;
        uchCRCHi = uchCRCLo ^ auchCRCHi[uIndex];
        uchCRCLo = auchCRCLo[uIndex];
    }

    return (uchCRCHi << 8 | uchCRCLo);
}

CVl53l8Oper::CVl53l8Oper(std::string portName) {
    memset((void*)tof_data1, 0, sizeof(tof_data1));
    memset((void*)tof_data2, 0, sizeof(tof_data2));
    if (this->operPort(portName)) 
    {
        if (this->setPortProperty(115200, 8, 'N', 1)) 
        {
            std::cout << "Serial port opened successfully!" << std::endl;
            seiralThread = std::make_shared<std::thread>(std::bind(&CVl53l8Oper::read_vl53l8_thread, this, serialportFd));
            seiralThread->detach();
        } 
        else 
        {
            std::cout << "Failed to set serial port property!" << std::endl;
        }
    }
    // if (!portName.empty()) {
    //     serialportFd = OpenPort(portName);
    //     if (serialportFd > 0) {
    //         cout << portName << "Port opened successfully!" << endl;
    //         seiralThread = std::make_shared<std::thread>(std::bind(&CVl53l8Oper::read_vl53l8_thread, this, serialportFd));
    //         seiralThread->detach();
    //     } else {
    //         cout << portName << "Port failed to open" << endl;
    //     }
    // } else {
    //     cout << "Please input the port:" << endl;
    // }
}

CVl53l8Oper::~CVl53l8Oper() {
    if (serialportFd > 0) {
        close(serialportFd);
        serialportFd = 0;
    }
}

int CVl53l8Oper::OpenPort(std::string port) {
    // int PortFd = open(port.c_str(), O_RDWR | O_NOCTTY);
    // if (PortFd <= 0) {
    //     cout << "open " << port << " failed!" << endl;
    //     return -1;
    // }
    // struct termios opt;
    // tcgetattr(PortFd, &opt);
    // cfsetispeed(&opt, B115200);
    // cfsetospeed(&opt, B115200);
    // opt.c_cflag |= (CLOCAL | CREAD);
    // opt.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
    // opt.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
    // opt.c_oflag &= ~(OPOST);
    // opt.c_cflag &= ~(CSIZE | PARENB | CSTOPB);
    // opt.c_cflag |= CS8;

    // opt.c_cc[VMIN] = 0;
    // opt.c_cc[VTIME] = 0;
    // tcflush(PortFd, TCIOFLUSH);
    // if (tcsetattr(PortFd, TCSANOW, &opt) < 0) {
    //     cout << "connect " << port << " failed" << endl;
    //     return -1;
    // }
    // cout << "open " << port << " successed!" << endl;
    // return PortFd;
    return 0;
}

int CVl53l8Oper::generate_resquest(uint8_t *buf, int id) {
    buf[0] = id;
    buf[1] = 0x03;
    buf[2] = 0x00;
    buf[3] = 0x00;
    buf[4] = 0x00;
    buf[5] = 0x40;
    uint16_t crc = CRC16_Modbus(buf, 6);
    buf[6] = (crc >> 8) & 0xff;
    buf[7] = crc & 0xff;
    return 8;

}

void CVl53l8Oper::read_vl53l8_thread(int fd) {
    // uint8_t current_id = SLAVE_ID1;
    // uint16_t send_length = 0;
    // uint16_t recv_length = 0;
    // uint8_t recv_buffer[256] = {0};
    Uchar buf_1[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x40, 0x44, 0x3A};
    Uchar buf_2[] = {0x02, 0x03, 0x00, 0x00, 0x00, 0x40, 0x44, 0x09};
    while (true) 
    {
        // send_length = generate_resquest(serial_send_buffer, current_id);
        // cout << "Sending request to slave " << int(current_id) << ": ";
        // for (int i = 0; i < send_length; ++i) {
        //     printf("%02X ", serial_send_buffer[i]);
        // }
        // cout << endl;
        // fd_set fdsets;
        // FD_ZERO(&fdsets);
        // FD_SET(fd, &fdsets);
        // readWirtePort(SendResponse, 30000, nullptr);

        
        // write(fd, serial_send_buffer, send_length);
        // tcflush(fd, TCIOFLUSH);

        // 设置select等待时间
        // struct timeval time;
        // time.tv_sec = 1;
        // time.tv_usec = 500000;

        // int ret = select(fd + 1, &fdsets, nullptr, nullptr, &time);
        // int select(int maxfdp,fd_set *readfds,fd_set *writefds,fd_set *errorfds,struct timeval *timeout);
        // < 0: select出错
        // = 0: 超时
        // > 0: 有事件发生

        // if (ret <= 0) {
        //     cout << "sensor " << int(current_id) << " select timeout, select returned " << ret << endl;
        //     // isState = false;
        //     // break;
        //     continue;
        //     // continue;
        // }
        // wait before reading
        // usleep(30000); // 30ms

        // recv_length = read(fd, recv_buffer, 256);

        // cout << "Received " << int(recv_length) << " bytes from slave " << int(current_id) << ": ";
        // for (int i = 0; i < recv_length; ++i) {
        //     printf("%02X ", recv_buffer[i]);
        // }
        // cout << endl;

        // if (recv_length > 0) {
            // cout << "Calling parse_response..." << endl;
            // int result = parse_response(recv_buffer, recv_length, current_id);
        // }

        // current_id = (current_id == SLAVE_ID1) ? SLAVE_ID2 : SLAVE_ID1;
        // setSendData(buf_1, sizeof(buf_1));
        // readWirtePort(SendResponse, 30000, nullptr);
        // std::this_thread::sleep_for(10ms);
        setSendData(buf_2, sizeof(buf_2));
        readWirtePort(SendResponse, 30000, nullptr);
        std::this_thread::sleep_for(10ms);
    }
}

int CVl53l8Oper::parse_response(uint8_t *buf, int len, int id) {
    // cout << "Parsing response for slave." << int(id) << ": ";
    // // for (int i = 0; i < len; ++i) {
    // //     printf("%02X ", buf[i]);
    // // }
    // cout << endl;

    // if (len < 133) {
    //     cout << "Invalid response length: expected at least 133 but got " << len << endl;
    // }
    // if (buf[0] != id) {
    //     cout << "Invalid ID: expected " << int(id) << " but got " << int(buf[0]) << endl;
    //     return -1;
    // }
    // if (buf[1] != 0x03) {
    //     cout << "Invalid function code: expected 0x03 but got " << int(buf[1]) << endl;
    //     return -1;
    // }
    // if (buf[2] != 128) { // 0x80 in hex
    //     cout << "Invalid data length: expected 128 (0x80) but got " << int(buf[2]) << endl;
    // }

    // Calculate CRC for the first 131 bytes
    // uint16_t crc = CRC16_Modbus(buf, len - 2);
    // uint8_t crc_hi = (crc >> 8) & 0xFF;
    // uint8_t crc_lo = crc & 0xFF;

    // if (crc_hi != buf[len - 2] || crc_lo != buf[len - 1]) {
    //     cout << "CRC check failed: expected " << hex << int(crc_hi) << " " << hex << int(crc_lo) << " but got " << hex << int(buf[len - 2]) << " " << hex << int(buf[len - 1]) << endl;
    //     return -1;
    // }

    // cout << "CRC check passed, copying TOF data..." << endl;
    
//     mutex_cp.lock();
//     memcpy(id == SLAVE_ID1 ? tof_data1 : tof_data2, buf + 3, len - 5);
//     if (id == 1) {
//         data_ready1 = true;
//     } else {
//         data_ready2 = true;
//     }
//     mutex_cp.unlock();
    return 1;
}

int CVl53l8Oper::parseAcceptData(void* para) {
    if (m_AcceptBufLen <= 0) {
        return -1;
    }

    // for (int i = 0; i < m_AcceptBufLen; ++i) {
    //     printf("%02X ", m_AcceptBuf[i]);
    // }
    // printf("%02d\n", m_AcceptBufLen);

    int id = m_AcceptBuf[0];
    // if (m_AcceptBuf[0] != id) {
    //     cout << "Invalid ID: expected " << int(id) << " but got " << int(m_AcceptBuf[0]) << endl;
    //     return -1;
    // }
    if (m_AcceptBuf[1] != 0x03) {
        cout << "Invalid function code: expected 0x03 but got " << int(m_AcceptBuf[1]) << endl;
        return -1;
    }
    if (m_AcceptBuf[2] != 128) { // 0x80 in hex
        cout << "Invalid data length: expected 128 (0x80) but got " << int(m_AcceptBuf[2]) << endl;
    }

    // Calculate CRC for the first 131 bytes
    uint16_t crc = CRC16_Modbus(m_AcceptBuf, m_AcceptBufLen - 2);
    uint8_t crc_hi = (crc >> 8) & 0xFF;
    uint8_t crc_lo = crc & 0xFF;

    if (crc_hi != m_AcceptBuf[m_AcceptBufLen - 2] || crc_lo != m_AcceptBuf[m_AcceptBufLen - 1]) {
        cout << "CRC check failed: expected " << hex << int(crc_hi) << " " << hex << int(crc_lo) << " but got " << hex << int(m_AcceptBuf[m_AcceptBufLen - 2]) << " " << hex << int(m_AcceptBuf[m_AcceptBufLen - 1]) << endl;
        return -1;
    }

    // cout << "CRC check passed, copying TOF data..." << endl;
    
    mutex_cp.lock();
    memcpy(id == SLAVE_ID1 ? tof_data1 : tof_data2, m_AcceptBuf + 3, m_AcceptBufLen - 5);
    if (id == 1) {
        data_ready1 = true;
    } else {
        data_ready2 = true;
    }
    mutex_cp.unlock();

    return 0;
}

int CVl53l8Oper::getTof(uint16_t *buf, int id) {
    std::unique_lock<std::mutex> lock(mutex_cp);
    if ((id == SLAVE_ID1 && !data_ready1) || id == SLAVE_ID2 && !data_ready2) {
        lock.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        cout << "waited 50 ms in getTof" << endl;
        return 0;
    }
    memcpy(buf, id == SLAVE_ID1 ? tof_data1 : tof_data2, 128);
    if (id == 1) {
        data_ready1 = false;
    } else {
        data_ready2 = false;
    }
    return 1;
}