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
  printf("��5���������ǣ�%d",max);
  printf("���ڵ�λ��Ϊ��%d\n",p);
  system("pause");
}