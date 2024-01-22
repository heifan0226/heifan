#include <stdio.h>
#include <windows.h>
int main()
{
    int x;
    for(x=100;x<1000;x++)
    {
        int a=x/100;
        int b=x/10%10;
        int c=x%10;
        if((a*a*a+b*b*b+c*c*c)==x)
        {
            printf("%d\n",x);
        }
    }
    system("pause");
    return 0;
}