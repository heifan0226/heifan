#include<stdio.h>
#include<windows.h>
int main()
{
  int a,b,c,max;
  printf("��������������\n");
  scanf("%d,%d,%d",&a,&b,&c);
  max=a;
  if (max<b)
   {
      max=b;
   }
  if (max<c) 
   {   
   max=c;
   }
  printf("%d\n",max);
  system("pause");
  return 0;
}