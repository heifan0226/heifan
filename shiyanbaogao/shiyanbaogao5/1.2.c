#include <stdio.h>
#include <string.h>
#include <math.h>
#include<windows.h>
void check(int ponse, float value)
{
    int val;
    printf("������һ����������");
    scanf("%f", &value); // �������У�ʹ����ȷ�ĸ�ʽ�����������뱣�浽��ȷ�ı�����
    val = (int)((value * 10 + 5) / 10);
    printf("������ֵ��%d", val);
    if (val == ponse)
        printf("\nWELL DONE!!\n"); // �������У�ȷ�� WELL DONE!! �����ʽ��ȷ
    else
        printf("\nSorry the correct answer is %d\n", val);
}

int main()
{
    int ponse;
    float value;

    // ���û������л�ȡֵ
    printf("������һ��������");
    scanf("%d", &ponse);

    // ���� check ����
    check(ponse, value);
    system("pause");
    return 0;
}
