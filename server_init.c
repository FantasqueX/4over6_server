//
// Created by fantasquex on 2020-04-10.
//

#include "server_init.h"

int init() {
    create_socket();
}

int create_socket() {
    int socket_fd;
    if ((socket_fd = socket(PF_INET6, SOCK_STREAM, 0)) < 0) {
        perror("Socket create");
        exit(EXIT_FAILURE);
    }
    return socket_fd;
}