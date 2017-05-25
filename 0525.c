#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    int fd[2];
    if(-1 == pipe(fd))
    {
        perror("pipe");
        exit(EXIT_FAILURE);

    }
    int i = 0;
    while(1)
    {
        write(fd[1],"c",1);
        i++;
        printf("i:%d\n",i);
    }
    return 0;
}


