#include <stdio.h>
#include <windows.h>
int main()
{
    int a, b, c, max;
    printf("请输入三个整数，以空格分隔: ");
    scanf("%d%d%d", &a, &b, &c);
    max = a > b ? a : b;
    max = max > c ? max : c;
    printf("最大的数是 %d\n", max);
    system("pause");
    return 0;
}
