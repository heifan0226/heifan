#include <stdio.h>
int main()
{
    int x,y;
    printf("input x:");
    scanf("%d",&x);
    if(x<4) y=x+5;
    else if(x>=4&&x<10)y=4*x+2;
    else y=5*x-10;
    printf("y=%d",y);
    return 0;
}