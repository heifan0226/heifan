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
//197��198����ASCII���0-127����Χ��������޷�ʶ������������������ʱ�����͵Ĵ�С��Χ��(-2^7 ~ 2^7-1)��197��198������Χ�����������-128��ʼ�������������-59��-58��