#include <stdio.h> 
#include <windows.h>
int main() 
{ 
    int a,b,c; 
    scanf("%d%d%d",&a,&b,&c); 
    if((a>b)&&(a>c)) 
    if(b<c) 
    printf("min=%d\n",b); 
    else printf("min=%d\n",c); 
    if((a<b)&&(a<c)) 
    printf("min=%d\n",a); 
    system("pause");
    return 0; 
}