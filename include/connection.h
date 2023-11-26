# ifndef MY_HEADER_FILE_H
# define MY_HEADER_FILE_H
#include "sungka.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#define PORT_ADDR 9803
void init_server_connection(struct sockaddr_in*, int*, int*);
void init_client_connection(struct sockaddr_in*, int*);
void exit_with_error(char*);
void init_server(struct sockaddr_in*);
void connect_client_to_server(int*, struct sockaddr_in*);
int listen_and_accept_connections(int);
void send_t(int, Sungka*);
void recv_t(int, Sungka*);
# endif