/*控制流*/
#include <stdio.h>

int main()
{
	/* code */
	int c, nwhite,nother,ndigit[10];
	nwhite = nother = 0;
	for (i = 0; i < 10; i++)
		ndigit[i] = 0;
	while ((c = getchar()) != EOF)
	{
		switch (c){
			case '0': case '1':
			case '2': case '3':
			case '4': case '5':
			case '6': case '7':
			case '8': case '9':
			ndigit[c - '0']++;
			break;
			case ' ';
			case '\n';
			case '\t';
			nwhite ++;
			break;
			default :
			nother++;
			break;
		}
	}
	printf("digits =");
	for (i=0;i<10;i++)
		printf("%d",ndigit[i]);
	printf(",while space = %d , other = %d",  nwhite, nother);
	return 0;
}


/*break 会使得for while do 中提前退出的功能 break 会使得最内层的循环闭合或者switch
立即退出
continue 使得for、while、或者do 循环开始执行下一轮循环
在while和do 中意味着立即执行循环测试部分
在 for 中则意味着循环控制转移到递增步骤
goto 标签*/












