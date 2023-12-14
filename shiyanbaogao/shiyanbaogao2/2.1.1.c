#include <stdio.h>
#include <windows.h>
int main()
{
    int a, b, c;
    printf("请输入三个整数，以空格分隔: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("最大的数是 %d\n", a);
        }
        else
        {
            printf("最大的数是 %d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("最大的数是 %d\n", b);
        }
        else
        {
            printf("最大的数是 %d\n", c);
        }
    }
    system("pause");
    return 0;
}
