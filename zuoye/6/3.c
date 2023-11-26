// 求3x3整型矩阵对角线元素之和的C语言程序
#include <stdio.h>
#include <windows.h>
int main()
{
    int a[3][3]; // 定义一个3x3的整型数组
    int i, j, sum = 0; // 定义一些辅助变量
    printf("请输入一个3x3的整型矩阵：\n"); // 提示用户输入
    for (i = 0; i < 3; i++) // 循环读取用户输入的9个整数，存入数组
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++) // 循环计算对角线元素之和
    {
        sum += a[i][i] + a[i][2 - i]; // 累加主对角线和副对角线上的元素
    }
    sum -= a[1][1]; // 减去中间元素，因为它被重复计算了两次
    printf("对角线元素之和为：%d\n", sum); // 输出结果
    system("pause");
    return 0;
}
