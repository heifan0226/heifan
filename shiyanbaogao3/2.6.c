#include<stdio.h>
#include <windows.h>
int main()
{
	int i, j, sum;      /* i��ʾҪ�жϵ�����j��ʾ���ӣ�sum��ʾ����֮��*/ 

	for (i = 2; i <= 1000; i++)
	{
		sum = 1;
		for (j = 2; j <= i / 2; j++)
			if (i%j == 0)         /* �ж�i�ܷ�j�������ܵĻ�j��Ϊ����  ���Ӳ��������� */ 
				sum += j;

		if (sum == i)    /* �жϴ����Ƿ��������֮�� */ 
		{
			printf("%d its factors are 1, ", i);    /* ������� */ 
			for (j = 2; j <= i / 2; j++)
				if (i%j == 0)printf("%d, ", j);    /* ������� */ 
			printf("\n");
		}
	}
system("pause");
return 0;
}