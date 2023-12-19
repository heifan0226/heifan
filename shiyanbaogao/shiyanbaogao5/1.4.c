#include <stdio.h>
#include <windows.h>
int gongyue(int num1, int num2) {
    int temp;
    while (num2 != 0) 
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    return num1; 
}

int main() {
    int result = gongyue(20, 30); 
    printf("最大公约数是：%d\n", result); 
    system("pause");
    return 0;
}
