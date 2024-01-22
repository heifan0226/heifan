#include <stdio.h>
#include <windows.h>
int main()
{
    int x;
    printf("请输入日期：");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("安排1值班\n");
        break;
    case 2:
        printf("安排2值班\n");
        break;
    case 3:
        printf("安排3值班\n");
        break;
    case 4:
        printf("安排4值班\n");
        break;
    case 5:
        printf("安排5值班\n");
        break;
    case 6:
        printf("不安排值班\n");
        break;
    case 7:
        printf("不安排值班\n");
        break;
    default:
        printf("重新输入\n");
        break;
    }
    system("pause");
    return 0;
}