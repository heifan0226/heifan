#include <stdio.h>
#include <windows.h>
// 定义一个函数，用于交换两个整数的值
void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// 定义一个函数，用于对四个整数进行冒泡排序
void sort(int *a, int *b, int *c, int *d) 
{
  // 比较相邻的两个数，如果前一个数大于后一个数，就交换它们的位置
  // 这样，每一轮循环后，最大的数就会被放到最后
  // 重复这个过程，直到所有的数都被排序好
  if (*a > *b) swap(a, b);
  if (*b > *c) swap(b, c);
  if (*c > *d) swap(c, d);
  if (*a > *b) swap(a, b);
  if (*b > *c) swap(b, c);
  if (*a > *b) swap(a, b);
}

int main() 
{
  // 定义四个整数变量
  int a, b, c, d;
  // 从标准输入读取四个整数
  printf("请输入四个整数：\n");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  // 调用排序函数
  sort(&a, &b, &c, &d);
  // 输出排序后的结果
  printf("排序后的结果是：\n");
  printf("%d %d %d %d\n", a, b, c, d);
  // 返回0表示程序正常结束
  printf("最大值为%d\n",d);
  // 输出最大值
  system("pause");
  return 0;
}
