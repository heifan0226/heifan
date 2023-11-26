// 用选择法对10个整数排序的C语言程序
#include <stdio.h>
#include <windows.h>
int main()
{
    int arr[10]; // 定义一个长度为10的整型数组
    int i, j, min, temp; // 定义一些辅助变量
    printf("请输入10个整数：\n"); // 提示用户输入
    for (i = 0; i < 10; i++) // 循环读取用户输入的10个整数，存入数组
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 9; i++) // 外层循环，控制排序的轮数，共9轮
    {
        min = i; // 假设当前轮的第一个元素是最小的
        for (j = i + 1; j < 10; j++) // 内层循环，从当前轮的第二个元素开始，依次和最小元素比较
        {
            if (arr[j] < arr[min]) // 如果发现有更小的元素
            {
                min = j; // 更新最小元素的下标
            }
        }
        if (min != i) // 如果最小元素不是当前轮的第一个元素，说明需要交换位置
        {
            temp = arr[i]; // 用一个临时变量保存当前轮的第一个元素
            arr[i] = arr[min]; // 把最小元素放到当前轮的第一个位置
            arr[min] = temp; // 把原来的第一个元素放到最小元素的位置
        }
    }
    printf("排序后的结果为：\n"); // 输出排序后的结果
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
