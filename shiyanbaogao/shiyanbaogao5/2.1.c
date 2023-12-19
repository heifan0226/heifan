#include <stdio.h>
#include <windows.h>
double factorial(int n)
{
    return n<2?1:(n *= factorial(n - 1), n);
}
int main()
{ 
    int n,m,c;
    printf("input m,n(m>n):");
    scanf("%d %d",&m,&n);
    c=factorial(m)/factorial(n);
    printf("c=%d\n",c);
    system("pause");
return 0;
}