#include <stdio.h>
#include <windows.h>
int main() 
{
     int a, b, c ; 
     int t; 
     scanf("%d,%d,%d",&a,&b,&c); 
     t=a; 
     a=b; 
     b=c; 
     c=t; 
     printf ( "%d,%d,%d" ,a, b, c );
    system("pause");
    
}