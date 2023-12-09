#include <stdio.h>
#include <windows.h>
#define N 20 // 定义一个常量 N，表示数组的最大大小
int main() {
    int rows, i, j, array[N][N]; // 定义变量和数组
    printf("请输入要打印的行数："); // 提示用户输入
    scanf("%d", &rows); // 获取用户输入的行数
    printf("%d行杨辉三角形如下：\n", rows); // 输出标题
    for (i = 0; i < rows; i++) { // 外层循环，控制行数
        for (j = 0; j <= i; j++) { // 内层循环，控制列数
            if (j == 0 || j == i) { // 如果是每一行的第一个或最后一个元素
                array[i][j] = 1; // 直接赋值为 1
            } else { // 否则
                array[i][j] = array[i-1][j-1] + array[i-1][j]; // 赋值为上面两个相邻元素的和
            }
        }
    }
    for (i = 0; i < rows; i++) { // 外层循环，控制行数
        for (j = 0; j < rows - i; j++) { // 内层循环，控制空格的个数
            printf(" "); // 打印空格
        }
        for (j = 0; j <= i; j++) { // 内层循环，控制元素的个数
            printf("%4d", array[i][j]); // 打印元素，用空格隔开
        }
        printf("\n"); // 打印换行符
    }
    system("pause");
    return 0; // 返回 0，表示程序正常结束
}
