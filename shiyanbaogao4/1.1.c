#include <windows.h>
#include <stdio.h>
#define size 5
int main(void)
{
 int a[size]={4,6,3,9,23};
 int max,p,i;
 max=a[0];
 p=0;
 for (i=1;i<size;i++)
  if(a[i]>max)
  {
   max=a[i];
  p=i+1;
  }
  printf("这5个数最大的是：%d",max);
  printf("所在的位置为：%d\n",p);
  system("pause");
}