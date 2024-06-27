#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <cstring>

int OpenPort(const std::string &port) {
    int PortFd = open(port.c_str(), O_RDWR | O_NOCTTY | O_NONBLOCK);
    if (PortFd <= 0) {
        std::cout << "open " << port << " failed!" << std::endl;
        return -1;
    }
    struct termios opt;
    tcgetattr(PortFd, &opt);
    cfsetispeed(&opt, B115200);
    cfsetospeed(&opt, B115200);
    opt.c_cflag |= (CLOCAL | CREAD);
    opt.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
    opt.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
    opt.c_oflag &= ~(OPOST);
    opt.c_cflag &= ~(CSIZE | PARENB | CSTOPB);
    opt.c_cflag |= CS8;
    opt.c_cc[VMIN] = 0;
    opt.c_cc[VTIME] = 100;
    tcflush(PortFd, TCIOFLUSH);
    if (tcsetattr(PortFd, TCSANOW, &opt) < 0) {
        std::cout << "connect " << port << " failed" << std::endl;
        return -1;
    }
    std::cout << "open " << port << " succeeded!" << std::endl;
    return PortFd;
}

void SendData(int fd, const std::string &data) {
    write(fd, data.c_str(), data.size());
    tcflush(fd, TCIOFLUSH);
}

int main() {
    std::string portName = "/dev/ttyS0"; // Replace with your 485 port
    int fd = OpenPort(portName);
    if (fd < 0) {
        return -1;
    }
    while (true) {
        SendData(fd, "Hello from 485 port\n");
        sleep(1); // Send data every second
    }
    close(fd);
    return 0;
}
