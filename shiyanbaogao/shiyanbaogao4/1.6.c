#include <stdio.h>
#include <string.h>
#include <windows.h>
int main() {
    char a[10], b[10];
    int c, d, k, ch;

    printf("�����һ���ַ���: ");
    scanf("%s", a);

    printf("����ڶ����ַ���: ");
    scanf("%s", b);

    printf("ԭʼ�� a=%s, b=%s\n", a, b);

    c = strlen(a);
    d = strlen(b);

    if (c > d) {
        // �����ַ���
        char temp[10];
        strcpy(temp, a);
        strcpy(a, b);
        strcpy(b, temp);
    }

    printf("�޸ĺ� a=%s, b=%s\n", a, b);
    system("pause");
    return 0;
}