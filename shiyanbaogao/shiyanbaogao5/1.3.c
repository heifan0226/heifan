#include <stdio.h>
#include <windows.h>
int main() {
    int x[10], i, s;
    for (i = 0; i < 10; i++)
        scanf("%d", &x[i]); 
    s = 0;
    for (i = 0; i < 10; i++)
        s += x[i]; 
    printf("Sum: %d\n", s); 
    system("pause");
    return 0;
}
