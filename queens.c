#include <stdio.h>

#define Queens 8
int a[Queens + 1];

int main(){
    int i,k,flag,not_finish =1,count= 1;
    i = 1;
    a[i] = 1;

    printf("the possible configueation of 8 queens are:\n");

    while(not_finish){
        while(not_finish && i <= Queens){
            for(flag = 1,k=1; flag && k < i; k++){
                if(a[k] == a[i])
                    flag = 0;
            }
            for (k = 1; flag && k < i; k++)
                if((a[i] == a[k] - (k-i) || (a[i] == a[k] + (k-i))))
                    flag = 0;
            if(!flag){
                if(a[i] == a[i-1]){
                    i --;
                    if(i > 1 && a[i] == Queens)
                        a[i] = 1;
                    else
                        if(i == 1 && a[i] == Queens)
                            not_finish = 0;
                        else
                            a[i] ++ ;
                }else if(a[i] == Queens)
                    a[i] = 1;
                else
                    a[i] ++;

            }else if(++i <= Queens){
                if(a[i - 1] == Queens)
                    a[i] = 1;
                else
                    a[i] = a[i-1] + 1;
        }}
        if (not_finish){
            ++count;
            printf((count -1)%3? "\t[%2d]:":"\n[%2d:]",count);
            for(k = 1; k <= Queens; k++)
                printf("%D",a[k]);
            if(a[Queens - 1] < Queens)
                a[Queens] ++;
            else
                a[Queens - 1] = 1;
            i= Queens - 1;
        }

    }

}
