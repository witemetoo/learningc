#include <stdio.h>

//int main(){
//    int c;
//    c = getchar();
//    while (c != EOF){
//        printf("%d\n",c);
//        c = getchar();
//    }
//}


//int main(){
//    int c;
//    while ((c=getchar())!= EOF){
//        putchar(c);
//    }
//}


//int main(){
//    long nc;
//    nc = 0;
//    while(getchar()!= EOF)
//        ++nc;
//    printf("%ld\n",nc);
//
//}

//int main(){
//    int c,nl;
//    nl = 0;
//    while((c = getchar()) != EOF){
//        if (c == '\n')
//            ++nl;
//    }
//    printf("%d\n",nl);
//}

//#include <math.h>
//int main(){
//    int i;
//    int k;
//
//    for (int m = 1;m <= 1000; ++m){
//        k = (int)sqrt((double)m);
//        for (i = 2; i <= k;i++){
//            if(m%i == 0)
//                break;
//        };
//        if (i>k)
//            printf("%d是素数\n",m);
//        else
//            printf("%d不是素数\n",m);
//    }
//
//}

//#define IN 1
//#define OUT 0
//
//int main(){
//    int c,nl,nw,nc,state;
//    state = OUT;
//    nl = nw = nc = 0;
//    while ((c = getchar()) != EOF){
//        ++nc;
//        if (c == '\n')
//            ++nl;
//        if (c == ' ' || c == '\n' || c == '\t')
//            state = OUT;
//        else if (state == OUT){
//            state = IN;
//            ++nw;
//        }
//    }
//    printf("%d %d %d\n",nl,nw,nc);
//}

//int main(){
//    int c,i,nwhite,nother;
//    int ndigit[10];
//
//    nwhite = nother = 0;
//    for (i = 0; i < 10 ;++i){
//        ndigit[i] = 0;
//    };
//    while((c = getchar()) != EOF){
//        if(c >= '0' && c <= '9')
//            ++ndigit[c-'0'];
//        else if (c == ' ' || c == '\n' ||  c == '\t')
//            ++nwhite;
//        else
//            ++nother;
//    }
//    printf("digits = ");
//    for (i = 0; i < 10; ++i)
//        printf("%d", ndigit[i]);
//    printf(", white space= %d,other=%d\n",nwhite,nother);
//}
//int power(int m, int n);
//
//int main(){
//    int i;
//    for(i = 0; i < 10; ++i)
//        printf("%d %d %d \n", i, power(2,i),power(-3,i));
//    return 0;
//}
//int power(int base, int n){
//    int i,p;
//    p = 1;
//    for (i = 1; i <= n; ++i)
//        p *= base;
//    return p;
//}

//#define MAXLINE 1000
//int other_getline(char s[],int lim);
//void copy(char to[], char from[]);
//
//int main(){
//    int len ;
//    int max;
//    char line[MAXLINE];
//    char longest[MAXLINE];
//
//    max = 0;
//    while((len = other_getline(line, MAXLINE)) > 0)
//        if (len > max){
//            max = len;
//            copy(longest,line);
//        }
//
//    if (max>0)
//        printf("%s",longest);
//    return 0;
//}
//
//int other_getline(char s[],int lim){
//    int c,i;
//    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c!= '\n'; ++i)
//        s[i] = c;
//    if (c== '\n'){
//        s[i] = c;
//        ++i;
//    }
//    s[i] = '\0';
//    return i;
//}
//
//void copy(char to[], char from[])
//{
//    int i ;
//    i = 0;
//    while((to[i] = from[i]) != '\0')
//        ++i;
//}

//#define MAXLINE 1000
//int other_other_getline(void);
//void copy(void);
//
//int main(){
//    int len;
//    extern int max;
//    extern char longest[];
//
//    max = 0;
//    while((len=other_other_getline()) > 0)
//        if (len>max){
//            max = len;
//            copy();
//        }
//    if(max>0)
//        printf("%s", longest);
//    return 0;
//}
//
//
//int other_other_getline(void)
//{
//    int c,i;
//    extern char line[];
//
//    for (i = 0; i< MAXLINE - 1 && (c = getchar()) != '\n'; ++i)
//        line[i] = c;
//    if(c == '\n'){
//        line[i] = c;
//        ++i;
//    }
//
//    line[i] = '\0';
//    return i;
//}
//
//void copy(void){
//    int i;
//    extern char line[], longest[];
//
//    i = 0;
//    while((longest[i] = line[i]) != '\0')
//        ++i;
//}
//int lower(int c);
//int lower(int c){
//    if(c >= 'A' && c <= 'Z')
//        return c + 'a' - 'A';
//    else
//        return c;
//}
//
//int main(){
//    for (int i = 'a'; i <= 'z'; i ++){
//        printf("%d\n", lower(i));
//    }
//}
void squeeze(char s[], int c);
void squeeze(char s[], int c){
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++){
        if (s[i] !=c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

int main(){
    char a[] = "wangbiaosb";
    squeeze(a,'a');
    printf("%s\n", a);
}


