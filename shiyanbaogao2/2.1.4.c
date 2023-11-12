#include <stdio.h>
#include <windows.h>
// 定义一个函数，求三个数中的最大值
int max(int x, int y, int z)
{
    int m = x > y ? x : y;
    m = m > z ? m : z;
    return m;
}
int main()
{
    int a, b, c;
    printf("请输入三个整数，以空格分隔: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("最大的数是 %d\n", max(a, b, c));
    system("pause");
    return 0;
}
