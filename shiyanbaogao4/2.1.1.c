//选择排序法
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
    // 定义一个变量 min_index，用于记录每一轮中最小元素的索引
    int min_index = i;
    // 内层循环控制每一轮中从未排序的部分中找出最小元素的索引
    for (int j = i + 1; j < length; j++) {
        // 如果当前元素小于 min_index 对应的元素，就更新 min_index 的值
        if (array[j] < array[min_index]) {
            min_index = j;
        }
    }
    // 如果 min_index 不等于 i，说明找到了更小的元素，就交换它们的位置
    if (min_index != i) {
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}
// 输出排序后的数组
for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
}
system("pause");
return 0;
}