#include<stdio.h>
#include<windows.h>
int main()
{
	char c1, c2;
	c1 = 197;
	c2 = 198;
	printf("c1 = %c, c2 = %c\n", c1, c2);
	printf("c1 = %d, c2 = %d\n", c1, c2);
    system("pause");
	return 0;
} 
//197和198超出ASCII码表（0-127）范围，计算机无法识别所以输出。输出整型时，整型的大小范围是(-2^7 ~ 2^7-1)，197和198超出范围，反向计数从-128开始计数，结果就是-59和-58。