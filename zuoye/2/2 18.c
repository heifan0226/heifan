#include<stdio.h>
#include<windows.h>
int main()
{
    int i,t;
    t=1;
    i=2;
    while (i<=5)
    {
        t=t*i;
        i=i+1;
    }
    printf("%d\n",t);
    system("pause");
    return 0;
}