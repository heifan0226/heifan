#include <stdio.h>
#include <windows.h>
int main()
{
int i, p;
int arr[] = {1,-3,0,-9,8,5,20,3};
for (i=0,p=0;i<8;i++)
{
    if (arr[i]>arr[p]);
    p=i;
}
printf("p=%d\n",p);
system("pause");
return 0;
}