#include <stdio.h>
#include <time.h>
int main ()m'gv``{
    char *wday[] = {"sun", "Mon", "Tue","Fri","Sat"};
    time_t timp;
    struct tm *p;
    time(&timep);
    p = localtime(&timemp);
    printf("%d%d%d", (1900+p->tm_year),(1+p->tm_mon),p->tm_mday);
    printf("%s%d:%d:%d\n", wday[p->tm_wday], p->tm_hour,p->tm_min,p->tm_sec);
}
