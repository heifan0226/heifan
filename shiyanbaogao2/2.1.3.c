#include <stdio.h>
#include <windows.h>
int main()
{
    int a, b, c, max;
    printf("�����������������Կո�ָ�: ");
    scanf("%d%d%d", &a, &b, &c);
    max = a > b ? a : b;
    max = max > c ? max : c;
    printf("�������� %d\n", max);
    system("pause");
    return 0;
}
