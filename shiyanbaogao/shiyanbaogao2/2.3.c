#include <stdio.h>
#include <windows.h>
int main()
{
    int score; // ����һ���������� score�������洢�û�����ĳɼ�
    printf("������ɼ�(0-100):"); // �����ʾ��Ϣ
    scanf("%d", &score); // �Ӽ��̶�ȡһ���������洢�� score ��
    if (score >= 90) // �ж� score �Ƿ���ڵ��� 90
    {
        printf("�ɼ��ȼ�Ϊ:A\n"); // ����ǣ���� A �ȼ�
    }
    else if (score >= 80) // �ж� score �Ƿ���ڵ��� 80
    {
        printf("�ɼ��ȼ�Ϊ:B\n"); // ����ǣ���� B �ȼ�
    }
    else if (score >= 70) // �ж� score �Ƿ���ڵ��� 70
    {
        printf("�ɼ��ȼ�Ϊ:C\n"); // ����ǣ���� C �ȼ�
    }
    else if (score >= 60) // �ж� score �Ƿ���ڵ��� 60
    {
        printf("�ɼ��ȼ�Ϊ:D\n"); // ����ǣ���� D �ȼ�
    }
    else // ����
    {
        printf("�ɼ��ȼ�Ϊ:E\n"); // ��� E �ȼ�
    }
    system("pause");
    return 0; // ��������ֵΪ 0
}
