#include<stdio.h>
#include<windows.h>
int main()
{
int a,b,temp;
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("�����������ֵΪ:%d %d\n",a,b);
system("pause");
return 0;
}
