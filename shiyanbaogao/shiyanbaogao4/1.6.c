#include <stdio.h>
#include <string.h>
#include <windows.h>
int main() {
    char a[10], b[10];
    int c, d, k, ch;

    printf("输入第一个字符串: ");
    scanf("%s", a);

    printf("输入第二个字符串: ");
    scanf("%s", b);

    printf("原始： a=%s, b=%s\n", a, b);

    c = strlen(a);
    d = strlen(b);

    if (c > d) {
        // 交换字符串
        char temp[10];
        strcpy(temp, a);
        strcpy(a, b);
        strcpy(b, temp);
    }

    printf("修改后： a=%s, b=%s\n", a, b);
    system("pause");
    return 0;
}