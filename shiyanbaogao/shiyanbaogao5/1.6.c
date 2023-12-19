#include <stdio.h>
#include<windows.h>
int main()
{ void   fun(int i, int j, int k);
  int x,y,z;
  x=y=z=6;
  fun(x,y,z);
  printf("%x=%d;y=%d;z=%d\n",x,y,z);
   system("pause");
   return 0;
}
void   fun(int i, int j, int k)
{  int t;
   t=(i+j+k)*2;
   printf("t=%d\n",t);
}
