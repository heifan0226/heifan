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
    char str[100];  // 假设字符串的最大长度为100

    printf("输入一个字符串: ");
    fgets(str, sizeof(str), stdin);

    // 在fgets中，如果输入的字符串包含换行符，则将其替换为null终止符
    char *newline = strchr(str, '\n');
    if (newline != NULL) {
        *newline = '\0';
    }

    deleteDigits(str);

    printf("删除数字后的字符串: %s\n", str);
    system("pause");
    return 0;
}