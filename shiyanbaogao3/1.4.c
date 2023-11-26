#include <stdio.h>
#include <windows.h>
main(void)
{  
long int sum=1;  
int n,i=1;
scanf("%d",&n);  
printf("\n");
while(i<=n)    
{  sum=sum*i; 
   i++;
}
printf("sum=%ld",sum); 
system("pause");
}