#include<stdio.h>
#include<windows.h>
int main()
{
int a,b,c,max;
scanf("%d %d %d",&a,&b,&c);
max=a;
if(b>max) 
max=b;
if(c>max) 
max=c;
printf("�������е����ֵΪ��%d\n",max);
system("pause");
return 0;
}
