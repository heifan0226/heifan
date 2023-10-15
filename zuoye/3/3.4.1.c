#include<stdio.h>
#include<windows.h>
int main()
{
	char c1, c2;
	c1 = 97;
	c2 = 98;
	printf("c1 = %c, c2 = %c\n", c1, c2);
	printf("c1 = %d, c2 = %d\n", c1, c2);
    system("pause");
	return 0;
} 
//c1和c2是字符型数据，占用一个字节。%c 字符，输出的是97,98在ASCII码表中对应的字符，%d 有符号十进制整数，输出的是97和98.