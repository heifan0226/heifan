#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
    int n; // 定义一个整数变量 n，用来存储用户输入的数
    double r; // 定义一个双精度浮点变量 r，用来存储计算出的平方根
    do
    {
        printf("请输入一个小于1000的正数: ");
        scanf("%d", &n); // 从键盘读取一个整数，存储在 n 中
        if (n <= 0 || n >= 1000) // 判断 n 是否为小于1000的正数
        {
            printf("输入错误，请重新输入\n"); // 如果不是，输出错误提示
        }
    } while (n <= 0 || n >= 1000); // 循环直到 n 为小于1000的正数
    r = sqrt(n); // 调用 sqrt 函数计算 n 的平方根，存储在 r 中
    printf("%d的平方根的整数部分是%d\n", n, (int)r); // 输出 n 的平方根的整数部分，使用强制类型转换将 r 转换为 int 型
    system("pause");
    return 0;
}
