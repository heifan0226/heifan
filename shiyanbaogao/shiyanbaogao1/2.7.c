#include<stdio.h>
#include<windows.h>
int main()
{
int a,b,z;
scanf("%d %d",&a,&b);
if(a>b)
z=a;
else
z=b;
printf("两个数中的较大者为：%d\n",z);
system("pause");
return 0;
}
