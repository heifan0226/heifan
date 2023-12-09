#include <stdio.h>
#include<windows.h>
int main()
{
  int i,max;
 int arr[10];
 for (i = 0; i<10; i++)
  scanf("%d", &arr[i]);
 max = arr[0];
 for (i = 1; i<10;i++)
 {
  if (arr[i] > max)
   max = arr[i];
 }
 printf("该数组中的最大值为%d\n", max);
 system("pause");
  return 0;
}
