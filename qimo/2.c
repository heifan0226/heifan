#include <stdio.h>
int main ()
{
    int x,y;
    printf("input x:");
    scanf("%d",&x);
    if (x<1) y=x;
    else if(x>=1&&x<10) y=2*x-1;
    else y=3*x-10;
    printf("y=%d",y);
    return 0;
}