#include <stdio.h>
#include <windows.h>
int main()
{
    int x;
    printf("���������ڣ�");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("����1ֵ��\n");
        break;
    case 2:
        printf("����2ֵ��\n");
        break;
    case 3:
        printf("����3ֵ��\n");
        break;
    case 4:
        printf("����4ֵ��\n");
        break;
    case 5:
        printf("����5ֵ��\n");
        break;
    case 6:
        printf("������ֵ��\n");
        break;
    case 7:
        printf("������ֵ��\n");
        break;
    default:
        printf("��������\n");
        break;
    }
    system("pause");
    return 0;
}