#include<stdio.h>
#include <windows.h>
int main()
{
    long sum,p,i;
    sum=0;
    p=1;
    for(i=1;i<=20;i++){
        p*=i;
        sum+=p;
    }
    printf("1!+2!+3!+...+20!=%ld\n",sum);
system("pause");
return 0;
}
