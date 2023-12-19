#include <stdio.h>
#include <string.h>
#include <math.h>
#include<windows.h>
void check(int ponse, float value)
{
    int val;
    printf("请输入一个浮点数：");
    scanf("%f", &value); // 修正此行，使用正确的格式符，并将输入保存到正确的变量中
    val = (int)((value * 10 + 5) / 10);
    printf("计算后的值：%d", val);
    if (val == ponse)
        printf("\nWELL DONE!!\n"); // 修正此行，确保 WELL DONE!! 输出格式正确
    else
        printf("\nSorry the correct answer is %d\n", val);
}

int main()
{
    int ponse;
    float value;

    // 从用户输入中获取值
    printf("请输入一个整数：");
    scanf("%d", &ponse);

    // 调用 check 函数
    check(ponse, value);
    system("pause");
    return 0;
}
