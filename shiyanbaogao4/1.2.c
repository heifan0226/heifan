#include <stdio.h>
#include <windows.h>
int main()
{
int i;
 int arr[8] = { 1, 0, 1, 0, 1, 0, 1, 0 };
 for (i = 0; i < 8; i++)
 {
    if(i%2==0)
   printf("%d\n", arr[i]);
}
system("pause");
return 0;
}