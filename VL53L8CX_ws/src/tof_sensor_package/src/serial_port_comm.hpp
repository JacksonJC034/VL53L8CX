#ifndef __SERIAL_PORT_COMM_HPP
#define __SERIAL_PORT_COMM_HPP

#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <errno.h>
//#include <pthread.h>
#include <sys/select.h>
#include <sys/time.h> 
#include <mutex>
#include <thread>

#include "robox_control_lister.hpp"
#include "robox_control_publish.hpp"

// #include "base_interfaces_demo/msg/hall_info.hpp"
// using base_interfaces_demo::msg::HallInfo;


#define Uint unsigned int
#define Uchar unsigned char 

enum SerialPortMode
{
	SendResponse = 0, //发送响应模式（）
	ContinuousAccept, //连续接受模式（）
	SendContinuousAccept, //发送连续接受模式
};


/*
	串口操作类
*/
class SerialPortComm
{
public:

	SerialPortComm(); 
	~SerialPortComm();

	// 打开串口
	bool operPort(std::string serialPortPath = "");

	// 设置串口属性
	bool setPortProperty(int nSpeed, int nBits, char nEvent, int nStop);

	// 按照指定模式读写串口
	int readWirtePort(int mode,int ms = 1000,void* para = nullptr);


	// 检测串口连接状态
	bool isPortState();

	// 关闭串口
	void closePort();

	//设置发送的数据
	void setSendData(Uchar* buf,int bufLen);

	//发送数据
	int writeData(const char *data, size_t size);

	//接受数据
	int readData(char *data, size_t size);
	
	//解析接收到的数据
	virtual int parseAcceptData(void* para = nullptr) = 0;

	//CRC计算法： 传入要校验的值  字符长度   计算的出的CRC校验码用BUF[2] 
	unsigned int CRC16_Modbus(volatile Uchar* puchMsg, Uint usDataLen, Uchar* bufCrc);

	
protected:
	
	//发送响应模式
	int sendResponse(int ms,void* para = nullptr);
	//连续接受
	int continuousAccept(int ms);
	//发送一次连续接受或者关闭
	void sendContinuousAccept(bool flag = true);

protected:
	int m_PortFd;

	bool isState;

	Uchar m_SendBuf[1024];
	int m_SendBufLen;
	Uchar m_AcceptBuf[1024];
	int m_AcceptBufLen;

	bool m_PortState;

	std::mutex m;
};


//#endif // !__SERIAL_PORT_COMM_HPP

#endif
