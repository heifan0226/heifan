#include <stdio.h>
#include <windows.h>
int main()
{
    int x;
    printf("����1-7�е���:");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    printf("�����ǹ�����\n");
        break;
    case 6:
    case 7:
    printf("��������Ϣ��\n");
        break;
    default:
    printf("������������������:\n");
    system("pause");
    return 0;
    }
}