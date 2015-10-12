#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <pthread.h>

#define BUFFER_SIZE 64
#define BLUETOOTH_PORT 4
#define WIRELESS_PORT 1234

int bt_isWriting, tcp_isWriting, arduino_isWriting, rpi_hasReceived;
int fd;
int bt_isConnected, tcp_isConnected, tcp_isReconnected, ar_isConnected;
int message_size;
char input[BUFFER_SIZE], output[BUFFER_SIZE];
char sender;
int sockfd;
#endif
