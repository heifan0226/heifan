#include <stdio.h>
#include <windows.h>
int main()
{
    int x;
    printf("输入1-7中的数:");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    printf("今天是工作日\n");
        break;
    case 6:
    case 7:
    printf("今天是休息日\n");
        break;
    default:
    printf("输入有误，请重新输入:\n");
    system("pause");
    return 0;
    }
}