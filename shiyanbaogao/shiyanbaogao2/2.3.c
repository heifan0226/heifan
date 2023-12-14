#include <stdio.h>
#include <windows.h>
int main()
{
    int score; // 定义一个整数变量 score，用来存储用户输入的成绩
    printf("请输入成绩(0-100):"); // 输出提示信息
    scanf("%d", &score); // 从键盘读取一个整数，存储在 score 中
    if (score >= 90) // 判断 score 是否大于等于 90
    {
        printf("成绩等级为:A\n"); // 如果是，输出 A 等级
    }
    else if (score >= 80) // 判断 score 是否大于等于 80
    {
        printf("成绩等级为:B\n"); // 如果是，输出 B 等级
    }
    else if (score >= 70) // 判断 score 是否大于等于 70
    {
        printf("成绩等级为:C\n"); // 如果是，输出 C 等级
    }
    else if (score >= 60) // 判断 score 是否大于等于 60
    {
        printf("成绩等级为:D\n"); // 如果是，输出 D 等级
    }
    else // 否则
    {
        printf("成绩等级为:E\n"); // 输出 E 等级
    }
    system("pause");
    return 0; // 函数返回值为 0
}
