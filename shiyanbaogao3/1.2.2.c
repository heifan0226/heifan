#include <stdio.h>
#include <windows.h>
int main()
{  int i,n,sum=0;
scanf("%d",&i);
n=i;
do 
{   sum+=i;
	i++;
} while(i<=10);
printf("%d+...+10=%d",n,sum);
system("pause");
return 0;
}