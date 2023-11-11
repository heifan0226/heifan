#include<stdio.h>
#include<windows.h>
int main()
{
int a,b,temp;
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("两数交换后的值为:%d %d\n",a,b);
system("pause");
return 0;
}
