#include <stdio.h>
#include <error.h>
#include <string.h>

int main(int argc, char **argv)
{
    int i;
    FILE *fp;
    char msg1[] = "hello,world\n";
    char msg2[] = "hello\nworld";
    char buf[128];

    //open a file and set nobuf(used serbuf) and weite string to it, check it before close of flush the stream
    if ((fp = fopen("no_buf1.txt", "w")) == NULL)
    {
        perror("file open failure!");
        return(-1);
    }
    setbuf(fp,NULL);
    memset(buf,'\0', 128);
    fwrite(msg1, 7, 1, fp);
    printf("test setbuf(no buf)! check no buf1.txt\n");
    printf("now buf data is :buf = %s\n", buf);

    printf("press enter to continue!\n");
    getchar();
    fclose(fp);
}
