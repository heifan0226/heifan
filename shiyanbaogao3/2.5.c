#include<stdio.h>
#include <windows.h>
int main()
{
	int a,b,c;
	for(int i=100;i<=999;i++)
	{
		a=i/100;  //百位数 
		b=(i/10)%10;  //十位数 
		c=i%10;  //个位数 
		if(a*a*a+b*b*b+c*c*c==i) 
		printf("%d\n",i);
	}
    system("pause");
 	return 0;
}  

