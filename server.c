#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/shm.h>


#define MYPORT 8887
#define QUEUE 20
#define BUFFER_SIZE 1024

int main(){

    int server_sockfd = socket(AF_INET, SOCK_STREAM,0);

    struct sockaddr_in server_sockaddr;
    server_sockaddr.sin_family = AF_INET;
    server_sockaddr.sin_port = htons(MYPORT);
    server_sockaddr.sin_addr.s_addr = htonl;

    //bind,成功返回0 出错返回－1
    if (bind(server_sockfd,(struct sockaddr *)&server_sockaddr,sizeof(server_sockaddr)) == -1)
    {
        perror("bind");
        exit(1);
    }
    while(1)
    {
        memset(buffer,0,sizeof(buffer));
        int len=resv(conn,buffer,sizeof(buffer),0);
        if(strcmp(buffer,"exit\n") == 0)
            break;
        fputs(buffer,stdout);
        send(conn,buffer,len,0);
    }
    close(conn);
    close(server_sockd);
    return 0;
}


