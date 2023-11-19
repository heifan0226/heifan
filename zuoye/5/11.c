# include <stdio.h>
#include <windows.h>
int main (void)
{	
	double sn= 100,hn= sn/2;	//sn为第一次落地时走过的路程，hn为第一次弹回的高度
	int n;						//n为弹回的次数，用于循环中
	for(n=2;n<=10;n++)			
	{
		sn=sn+2*hn;				//第二次落地时走过的路程 等于 第一次落地时走过的路程 + 第一次弹回的过程*2（弹回一次，落地一次所以一乘2）
		hn=hn/2;				//第三次弹回的路程是上一次的一半，所以除以2
	}
	
	printf("第十次落地时总共经过了%f米\n",sn);
	printf("第十次反弹%f米\n",hn);
	system("pause");
	return 0;
}
