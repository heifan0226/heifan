#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf("请输入三个数：\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<b)
	{
		max=b;
		if(b<c)
			max=c;
		else 
			max=b;
	}
	else
	{
		max=a;
	    if(a<c)
			max=c;
		else
			max=a;
	}
	printf("%d\n",max);
	return 0;
}
