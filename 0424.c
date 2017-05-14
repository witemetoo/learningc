#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//int main (void)
//{
//    if(lseek(STDIN_FILENO,0, SEEK_CUR) == -1)
//        printf("cannot seek\n");
//    else
//        printf("seek ok\n");
//    exit(0);
//}

#include <ctype.h>
#define MAXLINE 100
double other_atof(char s[]);
int main(){
    double sum, other_atof(char []);
    char line[MAXLINE];
    int other_getline(char line[], int max);

    sum = 0;
    while(other_getline(line, MAXLINE) > 0)
        printf("\t%g\n",sum += other_atof(line));
    return 0;
}



double other_atof(char s[])
{
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++ )
    { printf("%s \n","s");
        ;
     }
    sign = (s[i] == '-') ? -1:1;
    if(s[i] == '+' || s[i] == '-')
        i ++;
    for (val= 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i ++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    return sign * val / power;
}

int other_getline(char s[], int lim)
{
    int c, i;

    i = 0;
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if(c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}




