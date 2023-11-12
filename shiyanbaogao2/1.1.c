#include <stdio.h> 
#include <windows.h>
int main ( ) 
{ 
double a,b,c,s,v; 
printf("input a,b,c:\n");
 scanf("%lf%lf%lf",&a,&b,&c); 
s=a*b; 
v=a*b*c; 
printf("a=%f b=%f c=%f\n",a,b,c);
 printf("s=%f\nv=%f\n",s,v); 
 system("pause");
return 0; 
}
