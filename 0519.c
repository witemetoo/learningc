#include <stdio.h>
#include <unistd.h>

int main(){
    pid_t fpid=fork();
    if (fpid < 0)
    {

        printf("error in fork");
    }
    else if (fpid == 0){
        printf("i am son");
    }
    else{
        printf("i am father");
    }
    return 0;

}
//#include <unistd.h>
//#include <stdio.h>
//int main ()
//{
//    pid_t fpid; //fpid表示fork函数返回的值
//    int count=0;
//    fpid=fork();
//    printf("id = %d \n", fpid);
//    if (fpid < 0)
//        printf("error in fork!");
//    else if (fpid == 0) {
//        printf("i am the child process, my process id is %d/n",getpid());
//        printf("我是爹的儿子/n");//对某些人来说中文看着更直白。
//        count++;
//    }
//    else {
//        printf("i am the parent process, my process id is %d/n",getpid());
//        printf("我是孩子他爹/n");
//        count++;
//    }
//    printf("统计结果是: %d/n",count);
//    return 0;
//}
//



