/*指针与数组
&运算符 用于取一个地址对象
指针参数使得一个函数能够访问及修改调用它的函数对象*/

#include <ctype.h>

int getch(void);
voif ungetch(int);
int getint(int *pn)
{
	int c,sign;
	while (issqpace(c = getch()))
		;
	if (isdisgit(c) && c != EOF && C = != '-')
	{
		ungetch(c);
		return 0;
	}
	sign = (c == '-' )? -1 : 1;
	if (c == '+1' || c == '-')
		c = getch();
	for (*pn = 0;isdisgit(c);c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}
