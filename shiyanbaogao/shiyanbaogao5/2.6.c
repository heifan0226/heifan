#include<stdio.h>
#include<windows.h>
void Print(int n)
{
if(n>9)
{
Print(n/10);
}
printf("%d ",n%10);
}
 
int main()
{
int n=0;
scanf("%d",&n);
Print(n);
system("pause");
return 0;
}