//int binsearch(int x, int v[], int n)
//{
//    int low, high, mid;
//
//
//    low = 0;
//    high = n - 1;
//    while(low <= high) {
//        mid = (low+high)/2;
//        if(x<v[mid] )
//            high = mid + 1;
//        else id (x > v[mid])
//            low = mid + 1;
//        else
//            return mid;
//    }
//    return -1;
//}


//#include <stdio.h>
//int main()
//{
//    int c,i,nwhite,nother,ndigit[10];
//
//    nwhite = nother = 0;
//    for(i = 0; i < 10; i ++)
//        ndigit[i] = 0;
//    while((c = getchar()) != EOF)
//    {
//        switch(c){
//            case '0':case '1': case '2': case '3': case '4': case '5': case '6':
//            case '7': case '8': case '9':
//                ndigit[c-'0']++;
//                break;
//
//            case ' ':
//            case '\n':
//            case '\t':
//                nwhite++;
//                break;
//            default:
//                nother ++;
//                break;
//
//        }
//
//    }
//    printf("digits= ");
//    for(i = 0; i < 10; i ++)
//        printf("%d", ndigit[i]);
//    printf(",white space = %d, other = %d\n", nwhite, nother);
//    return 0;
//}

//#include <ctype.h>
//
//int atoi(char s[])
//{
//    int i, n, sign;
//
//    for (i = 0; isspace(s[i]); i ++)
//        ;
//    sign = (s[i] == '-') ? -1:1;
//    if(s[i] == '+' || s[i] == '-')
//        i ++;
//    for (n = 0; isdigit(s[i]); i++)
//        n = 10 * n + (s[i] - '0');
//    return sign * n;
//}

void shellsort(int v[], int n)
{
    int gap,i,j,temp;

    for (gap=n/2;gap > 0; gap /= 2)
        for (i = gap ; i < n ; i ++)
            for (j = i - gap ; j >= 0 && v[j] > v[j+gap]; j -=gap){
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}

#include <string.h>

void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i ++, j --){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}








