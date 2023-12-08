#include <stdio.h>
#include <windows.h>
#define  N  10
int main(void)
{ int i,a[N],av;
for(i=0;i<N;i++)
   scanf("%d",&a[i]);
     for(i=0;i<N;i++)
        { printf("%d",a[i]);
           if((i+1)%3==0)
               printf("\n");
         }
         printf("\n");
      for(i=0;i<N;i++)
         av+=a[i];
      printf("av=%f\n",(float)av/N);
      system("pause");
  }