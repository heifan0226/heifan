#include <stdio.h>
#include <windows.h>
int main()
{
    int n,i=0,j=0;
    printf("input a integer,0 for end\n");
    scanf("%d",&n);
    while (n!=0)   
      { 
        if(n>0) i=i+1;
        else  j=j+1;
        scanf("%d",&n);
      }
    printf("i=%4d,j=%4d\n",i,j);
    system("pause");
    return 0;
}
