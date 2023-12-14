//冒泡排序法
#include<stdio.h>
#include<windows.h>
int main()
{
// 定义一个包含 10 个整数的数组
int array[10] = {5, 8, 2, 9, 1, 4, 7, 6, 3, 10};
// 获取数组的长度
int length = sizeof(array) / sizeof(array[0]);
// 外层循环控制排序的轮数，一般为数组长度减一
for (int i = 0; i < length - 1; i++) {
    // 内层循环控制每一轮中比较相邻元素的次数，一般为数组长度减去已排序的元素个数
    for (int j = 0; j < length - i - 1; j++) {
        // 如果前面的元素大于后面的元素，就交换它们的位置
        if (array[j] > array[j + 1]) {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }
}
// 输出排序后的数组
for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
}
system("pause");
return 0;
}