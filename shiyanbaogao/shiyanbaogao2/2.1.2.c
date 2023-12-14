#include <stdio.h>
#include <windows.h>
int main()
{
    int a, b, c;
    printf("请输入三个整数，以空格分隔: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("最大的数是 %d\n", a);
    }
    if (b > a && b > c)
    {
        printf("最大的数是 %d\n", b);
    }
    if (c > a && c > b)
    {
        printf("最大的数是 %d\n", c);
    }
    system("pause");
    return 0;
}
