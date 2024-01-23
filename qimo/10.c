#include <stdio.h>
#include<windows.h>
int main()
{
    int add();
    int sum=0;
    sum=add();
    printf("sum=%d",sum);
    system("pause");
    return 0;
}

int add()
{
    int num,sum=1;
    for ( num=1;num<=100;num++)
    {
        sum+=num;
    }
    return sum;
}