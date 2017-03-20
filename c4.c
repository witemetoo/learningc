#include <stdio.h>
#define MAXLINE 10000
int other_getline(char line[],int max)
int strindex(char source[],char searchfor []);

char pattern[] = "ould";

int main()
{
	/* code */
	char line[MAXLINE];
	int found = 0;

	while(other_getline(line, MAXLINE) > 0)
			if(strindex(line,pattern) >= 0){
				printf("%s",line);
				found ++;
			}

	return found;
}



int other_getline(char s[],int lim)
{
	int  c,i;
	i = 0;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

int strindex(char s[], char t[])
{
	int i,j,k;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++,k++)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}


/*
最简单的函数是：dummy (){}
这样的无为函数 在程序开发期间被用来预留位置。如果函数定义中忽略了返回类型
则默认位 int 类型 程序可以看成是变量定义和函数的集合。函数之间通过参数、函数返回值及外部变量进行交互
c程序由一组外部（external）对象构成，或是变量或是函数
（internal）用于描述函数内的参数和变量。外部变量在函数之外定义，因而有可能被多个函数使用
函数一定是外部的 因为c中不允许在函数中定义其他函数 默认情况下，外部变量与函数 具有如下性质
通过相同的名字引用外部对象 所引用的是同一对象的实体，即使引用他们的是独立编译的函数也是如此
外部变量还体现在有更大的作用域 和更长的存活期
*/


#include <stdio.h>
#include <stdlib.h>


#define MAXOP 100
#define NUMBER '0'
int getop(char []);
void push(double);
double pop(void);

int main()
{
	/* code */
	int type;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) !=EOF)
	{
		switch(type){
			case NUMBER:
			push(atof(s));
			break ;
			case '+':
			push(pop()+pop());
			break;
			case '*':
			push(pop()*pop());
			case '-':
			op2 = pop();
			push(pop()-op2);
			break;
			case '/':
			op2 = pop();
			if (op2 != 0.0)
				push(pop() /op2);
			else
				printf("error :除零溢出\n");
			break;
			case '\n':
			printf("\t%.8g\n",pop());
			break;
			default:
			printf("error: 未知命令 %s\n",s);
			break;

		}
	}
	return 0;
}


#define MAXVAL 100
int sp = 0;
double val[MAXVAL];
void push(double f)
{
	if (sp < MAXVAL)
		val [sp++] = f;
	else
		printf("error:栈满不能将 %g压栈\n", f);
}


void pop(void)
{
	if (sp > 0)
		return val[--sp];
	else
	{
		printf(" error:栈空\n");
		return 0.0;
	}
}


#include <ctype.h>
int getch(void);
void ungetch(int);
int getop(char s[])
{
	int i,c;
	while ((s[0] = c = getch == ' ' || c == '\t'))
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;
	i = 
}


/*
作用域规则
一个名字的作用域是指程序中可以使用该名字的部分
外部变量或函数的作用域是他们在文件中被声明的位置开始到该被编译的文件的末尾
另一方面 如果一个外部变量在定义之前就需要被使用 或者该外部变量定义与使用它
的源文件在不同的源文件之中，那么相应的声明就要强制性的使用关键词 extern
声明 只是标名了变量的属性（主要是它的类型） 而定义还会为其留出存贮空间
如代码：
int sp
double val［MAXVAL］；
出现在所有的函数之外，那么他们定义了外部变量sp 和 val 并为其留出存贮空间，同时
还作为该源文件余下部分的变量声明
另一方面
extern int sp；
extern double val［］；
为该文件的余下部分声明了sp 是一个 int 的数 val 是一个double型的数组
但是她们没有创建这些变量或者为变量保留存储空间
*/


/*
静态变量
静态变量通过在普通声明之前加上关键字static来声明
如下程序：
*/
static char buf[BUFSIZE];
static int bufp = 0;
int getch(void) {}
void ungetch(int c) {}
/*
那么其他历程都将无法访问 buf 和 bufp 并且这两个名字不会与同一程序的其它文件的
相同名字发生冲突
外部的静态声明都用于变量。用于函数的情况下，通常情况下 函数名是全局的
对于整个程序的任何部分都可见。但是如果一个函数被声明为静态的 那么在包含该声明的文件之外
是不可见的
静态声明还可用于内部变量 内部静态变量和自动变量一样，是某个特定函数的局部变量
但与自动变量不同。他们是一直存在的，而不是随着每次函数的调用而产生和消亡
这意味着 内部静态变量提供了仅在单个函数内使用的、持续话的存储空间
*/
/*
寄存器变量 register 声明用于提示编译器其声明的变量将被及频繁的使用
但是编译器可以忽略这一点
*/

/*
初始化 
在没有显示初始化的情况下外部变量与静态变量被默认初始化为0
而自动变量与寄存器变量则具有 为定义的初值 

标量可以在定义时初始化 
外部变量和静态变量其初始值必须是一个常量表达式
初始化只进行一次（概念上是在程序开始之前执行完成）。对于自动变量和寄存器变量
每次进入函数或者程序块时都会对其进行初始化
*/

/*
递归（函数自己调用自己）
当函数递归调用自身时 每次调用都会得到一个新的全部自动变量的集合 该集合与之前调用
获得的变量集合彼此独立
*/

/*c预处理器

预处理是指编译过程中单独执行的第一个步骤。其中两个最常用的特性 就是＃include
和define */


/*宏替换 ＃define
定义的名字的作用域是从其定义位置开始到该文件的编译文件的末尾为止
宏定义可以使用之前的宏定义 宏只对标记进行替换 而在带引号的字符串中不会发生替换
如果 替换文本的某个参数名之前带有＃ 此组合在该形参被替换为实参之前将被扩展为
带引号的字符串
*/

/*
条件包含
预处理本身可以通过（在预处理过程中求值的）条件语句进行控制。所以提供了
一种根据编译过程中的条件取值来选择性的包含代码的方法
 ＃if语句对一个整型常量表达式求值（表达式中不得包含sizeof、强制类型
 转化以及枚举常量） 如果常量式的值不为零，那么改行后一致到＃endif ＃elif
 或者＃else 之间的行都会被包含到代码中

 为了确保文件hdr.h 的内容只会被包含一次
*/
#if !defined(HDR)
#define HDR

#endif
































