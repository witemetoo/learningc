#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include "apue.h"
#define BUFFSIZE 4096
int main(void){
//    if (lseek(STDIN_FILENO,0,SEEK_CUR) == -1)
//        printf("cannot seek\n");
//    else
//        printf("seek ok\n");
//    exit(0);
//    int fd;
//
//    if ((fd=creat("file.hole", FILESEC_MODE)) < 0)
//        err_sys("creat error");
//
//    if (write(fd,buf1,10) != 10)
//        err_sys()
//        offset now = 16384
//
    int n;
    char buf[BUFFSIZE];

    while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
        if (write(STDOUT_FILENO, buf, n) !=n)
            printf("weite error");
    if (n < 0)
        printf("read error");
    exit(0);
    FILE *fd = open()

}
