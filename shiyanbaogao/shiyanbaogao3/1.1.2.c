#include <stdio.h>
#include <windows.h>
int main()
{
int  s,i;
s=0;              /*  第5行 */
i=1;
while(i<=100)
{
   s=s+i;
   i++;
}
printf("1+...+100=%d\n",s);
system("pause");
return 0;
}
