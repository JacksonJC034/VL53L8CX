#include "termios.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <cstdint>
#include <thread>
#include <iostream>
#include <functional>
#include <mutex>
#include <chrono>

class CVl53l8Oper {
private:
    int serialportFd;
    uint8_t serial_send_buffer[20];
    uint8_t serial_recv_buffer[1000];
    std::mutex mutex_cp;
    std::shared_ptr<std::thread> seiralThread;
    uint16_t tof_data1[64];
    uint16_t tof_data2[64];
    bool data_ready1 = false;
    bool data_ready2 = false;

    int OpenPort(std::string port);
    void read_vl53l8_thread(int fd);
    int generate_resquest(uint8_t *buf, int id);
    int parse_response(uint8_t *buf, int len, int id);
    static uint16_t CRC16_Modbus(volatile uint8_t *puchMsg, uint16_t usDataLen);

public:
    CVl53l8Oper(std::string portName = "");
    ~CVl53l8Oper();
    int getTof(uint16_t *buf, int id);
};
