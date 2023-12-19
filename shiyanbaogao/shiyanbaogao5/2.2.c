#include <stdio.h>
#include <stdlib.h>

int sum;                                          //定义外部变量sum

//最大公约数函数
int HCF(int x, int y){
    int i, k, m, n;
    sum = 1;
    k = x > y ? y : x;
    i = 2;
    while (i <= k){
        m = x % i;
        n = y % i;
        if (m == 0 && n == 0){
            sum *= i;
            x /= i;
            y /= i;
            i = 2;
        }
        else
            i++;
    }    
    return sum;
}

//最小公倍数函数
int LCM(int p, int q){
    int lc;
    lc = p * q / sum;
    return lc;
}

int main(){
    int a, b, hcf, lcm;
    
    scanf("%d %d", &a, &b);                       //输入两个整数
    
    hcf = HCF(a, b);                              //调用最大公约数函数
    lcm = LCM(a, b);                              //调用最小公倍数函数
    printf("HCF is %d  LCM is %d\n", hcf, lcm);   //输出最大公约数和最小公倍数
    
    system("pause");
    return 0;
}
