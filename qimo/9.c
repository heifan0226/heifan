#include <stdio.h>
#include <windows.h>
int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,1,2,3}};
    int b[4][3],i,j;
    printf("a=\n");
    for ( i = 0; i <=2; i++)
    {
        for ( j = 0; j <=3; j++)
        {
            printf("%5d",a[i][j]);
            b[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("b=\n");
    for ( i = 0; i <=3; i++)
    {
        for ( j = 0; j <=2; j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
        system("pause");
    return 0;
}