#include<stdio.h>
#include<windows.h>
int main()
{
	char c1, c2, c3, c4, c5;
	 
	c1 = 'C';    //给c1到c5赋初值
	c2 = 'h';
	c3 = 'i';
	c4 = 'n';
	c5 = 'a';
 
	c1 = c1 + 4;    //ASCII值在原来的基础上加4
	c2 = c2 + 4;
	c3 = c3 + 4;
	c4 = c4 + 4;
	c5 = c5 + 4;
 
	putchar(c1);    //使用putchar函数输出c1到c5的值
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5); 
    putchar('\n');
	system("pause");
	return 0;
} 