#include<stdio.h>
#include<windows.h>
int sum(int a)
{
	int c=0;
	static int b=3;
	c+=1;
	b+=2;
	return a+b+c;
}
int main()
{
	int i;
	int a=2;
	for (i=0; i<5; i++)
		printf("%d,", sum(a));
system("pause");
return 0;
}
