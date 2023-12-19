#include <stdio.h>
#include <windows.h>
int main()
{
    void prime_number(int n);
    int a;
    printf("Please enter a number: ");
    scanf("%d",&a);
    prime_number(a);
    return 0;
}


void prime_number(int n)
{
    int i;
    for(i=2;i<=n-1;i++)
        if(n%i==0)
            break;
    if(i==n)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);
        system("pause");
}
