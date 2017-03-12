#include <stdio.h>

// int main()
// {
// 	/* code */
// 	int fahr, celsius;
// 	int lower,upper,step;
// 	lower = 0;
// 	upper = 300;
// 	step = 20;
// 	fahr = lower;
// 	while (fahr <= upper){
// 		celsius = 5*(fahr-32) / 9;
// 		printf("%d\t%d\n",fahr,celsius);
// 		fahr = fahr+step; 
// 	/* C的数据类型 int float char short long double
// 		数组和结构和联合 以及指向这些类型的指针和返回这些类型的函数
// 		c语言没有定义输入和输出函数 printf 只是标准库中的一个函数
// 		标准库中的函数可以被c程序调用

// 	*/
// 	}

// 	return 0;
// }
// int main()
// {
// 	/* code */
// 	float fahr,celsius;
// 	int lower,upper,step;
// 	lower = 0;
// 	upper =300;
// 	step = 20;
// 	fahr = lower;
// 	while(fahr <= upper){
// 		celsius = (5.0 / 9.0) * (fahr-32.0);
// 		printf("%3.0f %6.1f\n", fahr,celsius);
// 		fahr = fahr+step;
// 	}
// 	return 0;
// 	/* fahr 和 celsius 被声明为浮点类型 
// 	如果一个算术运算的操作数都是整数 则会执行整数运算
// 	如果一个浮点数和整数运算 则整数首先会被转化为浮点数 然后进行浮点运算
// 	printf可以规划输出格式
// 	#define 将一个符号名字或是符号常量定义为一串特定的字符
// 	文本流的定义：文本流是一个被划分为多行的字符序列，每一行包含零个到多个字符
// 	行磨带有一个换行符
// 	标准库的 getchar 和 putchar 函数分别从文本流中读取一个字符并返回它的值
// 	*/
// }
 // 



// int main()
// {
// 	/* code */
// 	double nc;
// 	for (nc = 0;getchar() != EOF; ++nc)
// 		;
// 	printf("%.0f\n", nc);

// 	/*程序中的for循环体为空，这是因为所有的工作都在测试和递增部分做了
// 	但是c语言的的语法要求for语句必须要有循环体 程序中的分号就是为了满足这个条件*/
// 	return 0;
// }


// int main()
// {
// 	/* code */
// 	int c,nl;
// 	nl = 0;
// 	while((c= getchar()) != EOF)
// 		if (c == '\n')
// 			++nl;
// 		printf("%d\n",nl);
// 	return 0;
// 	/*在单引号上的单个字符代表一个整数值，这个值等于具体机器字符集该字符对应的数值。被称为字符
// 	常量*/
// }


// #define IN 1
// #define OUT 0

// int main()
//  {
//  	/* code */
//  	int c, nl,nw,nc,state;
//  	state = OUT;
//  	nl = nw = nc = 0;
//  	while((c= getchar())!=EOF){
//  		++nc;
//  		if(c=='\n')
//  			++nl;
//  		if(c == ' ' || c== '\n' || c=='\t')
//  			state = OUT;
//  		else if (state == OUT){
//  			state = IN;
//  			++nw;
//  		}
//  	}
//  	printf("%d %d %d\n", nl,nw,nc);
//  	/*|| 和&&  运算机制 保证表达式会从左到右求值只要出现假 求值便会停止 */
//  	return 0;
//  } 

/*数组*/

 // int main()
 // {
 //    int c,i,nwite,nother;
 //    int ndigit[10];


 //    nwite = nother;
 //    for(i = 0;i < 10;++i)
 //    	ndigit[i] = 0;
	// while((c=getchar())!=EOF)
	// if (c>='0' && c <= '9')	
	// 	++ndigit[c-'0'];
	// else if (c==' '|| c== '\n' || c == '\t')
	// 	++nwite;
	// else
	// 	++nother;
	// printf("digits =");
	// for (i = 0;i <10;++i)
	// 	printf("%d",ndigit[i]);
	// printf(",wite space = %d,other = %d\n", nwite,nother);
	// /*
	// if else 语句程序会对 if else 的条件从上到下依次检测 直到某个条件成立
	// 然后执行该条件的对应的语句 如果没有else语句 则什么动作都不发生
	// */
 // 	return 0;
 // }

// int main()
// {
// 	/* code */
// 	通常使用 形参 指代函数定义括号列出的变量名 
// 	实参 指代函数调用时使用的常量或者变量
// 	函数不一定要返回一个值 一个不带表达式的return 语句将导致控制权还给调用着
// 	但不返回有用的值 调用函数也可以忽略被调用函数返回的值
// 	main 函数的末尾有return 语句 他返回一个值给他的调用者 －－改程序的执行环境
// 	返回0代表函数正常结束
// 	非0代表异常或错误中止的情况
// 	c语言中的按值调用  c语言中的被调用函数不能直接修改函数中的变量 他只能修改私有的临时副本
	
	


// 	return 0;
// }


// int power(int base,int n) /*函数原型*/
// {
// 	int i,p;

// 	p = 1;
// 	for (i = 1;i <= n; ++i)
// 		p=p*base;
// 	return p;
// }

// /*安置调用*/
// int other_power(int base,int n)
// {
// 	int p;

// 	for (p=1;n>0; --n)
// 		p = p* base;
// 	return p;
// }
 
// int main()
// {
// 	/* code */
// 	int i;
// 	for (i=0;i<10;++i)
// 		printf("%d %d %d\n",i,power(2,i),power(-3,i));
// 	return 0;
// }


/*字符数组 计算文本中字符最多的行并输出*/

#define MAXLINE 1000

int other_getline(char line[],int maxline);
void copy(char to[],char from[]);

int main()
{
	/* code */
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = other_getline(line,MAXLINE))>0)
		if (len > max)
		{
			max = len;
			copy(longest,line);
		}
	if(max > 0)
		printf("%s\n",longest);
	return 0;
}

int other_getline(char s[],int lim)
{
	int c, i;
	for (i=0;i<lim-1 &&(c =getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c=='\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[],char from[])
{
	/* code */
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}










































































