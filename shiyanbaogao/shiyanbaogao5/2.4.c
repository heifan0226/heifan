#include <stdio.h>
#include <windows.h>
int main()
{
    void array_switch(int a[3][3]);
    int array[3][3];
    printf("please enter an array: ");
    int i,j;
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&array[i][j]);
    array_switch(array);
    printf("The switched array is:\n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            {
                printf("%d ",array[i][j]);
                if(j==2)
                    printf("\n");
            }
    system("pause");
    return 0;
}

void array_switch(int a[3][3])
{
    int i,j;
    int b[3][3];
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        {
            b[i][j]=a[j][i];
        }
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        {
            a[i][j]=b[i][j];
        }
}
