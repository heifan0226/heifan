#include <stdio.h>
#include <windows.h>
int main()
{
    // 假设这是给定的字符数组s2，你可以用任何方式输入或生成它
    char s2[] = "Hello, world!";
    // 定义一个字符数组s1，长度要大于等于s2的长度
    char s1[20];
    // 用一个循环遍历s2的每个字符
    int i = 0;
    while (1) // 无限循环，直到遇到'\0'时退出
    {
        // 将s2的当前字符复制到s1中
        s1[i] = s2[i];
        // 如果当前字符是'\0'，则退出循环
        if (s2[i] == '\0')
            break;
        // 否则，继续下一个字符
        i++;
    }
    // 打印输出s1和s2
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    system("pause");
    return 0;
}
