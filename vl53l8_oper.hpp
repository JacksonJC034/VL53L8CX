#include "termios.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "string.h"

#include <thread>
#include "iostream"
#include <functional>
#include <mutex>
// #include "utils.hpp"

class CVl53l8Oper
{
private:
    /* data */
    int serialportFd;
    uint8_t serial_send_buffer[20];
    uint8_t serial_recv_buffer[1000]; //8bit-int
    std::mutex mutex_cp; //拷贝数据时候互斥锁
    std::shared_ptr<std::thread> seiralThread; //指向线程的智能指针
    // std::shared_ptr<CUtils> cutils_;
    int OpenPort(std::string port);
    void read_vl53l8_thread(int fd);
    int generate_resquest(uint8_t *buf,int id);
    int parse_response(uint8_t *buf,int len,int id);
    uint16_t tof_data[64];

    // uint16_t CRC16_Modbus(volatile uint8_t *puchMsg, uint16_t usDataLen);
public:
    CVl53l8Oper(std::string portName = nullptr);
    ~CVl53l8Oper();
    int getTof(uint16_t *buf);
};

