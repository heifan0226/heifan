#include <stdio.h>
#include <windows.h>
// ����һ�����������������е����ֵ
int max(int x, int y, int z)
{
    int m = x > y ? x : y;
    m = m > z ? m : z;
    return m;
}
int main()
{
    int a, b, c;
    printf("�����������������Կո�ָ�: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("�������� %d\n", max(a, b, c));
    system("pause");
    return 0;
}
