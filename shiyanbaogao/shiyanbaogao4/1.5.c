#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
void deleteDigits(char *s) 
{
    int n = 0, i;
    for (i = 0; s[i]; i++) 
    {
        if (!isdigit(s[i])) 
        {
            s[n++] = s[i];
        }
    }
    s[n] = '\0';
}

int main() {
    char str[100];  // �����ַ�������󳤶�Ϊ100

    printf("����һ���ַ���: ");
    fgets(str, sizeof(str), stdin);

    // ��fgets�У����������ַ����������з��������滻Ϊnull��ֹ��
    char *newline = strchr(str, '\n');
    if (newline != NULL) {
        *newline = '\0';
    }

    deleteDigits(str);

    printf("ɾ�����ֺ���ַ���: %s\n", str);
    system("pause");
    return 0;
}