#include <stdio.h>
#include <windows.h>
int main()
{
    // 定义一个二维数组，你可以用任何方式输入或生成它
    int arr[3][4] = {12, 2, 45, 36, 2, 10, 86, 0, 54, 666, 58, 400};
    // 用两层循环遍历二维数组的每个元素
    for (int i = 0; i < 3; i++) // 外层循环控制行数
    {
        for (int j = 0; j < 4; j++) // 内层循环控制列数
        {
            // 打印输出当前元素，用制表符分隔
            printf("%d\t", arr[i][j]);
        }
        // 每输出一行，换行
        printf("\n");
    }
    system("pause");
    return 0;
}
