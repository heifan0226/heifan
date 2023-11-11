#include<stdio.h>
#include<windows.h>
#include<math.h> 	//要使用POW函数计算次方就得调用数学函数库 
 
int main()
{
	int n; //定义年份 
	float p,r; //定义结果p和增长率r 
	
	r = 0.07; //题目中的年增长率7% 
	printf("请输入你想计算的年份数字：") ; 
	scanf("%d", &n); //输入年份 
		
	p = pow((1 + r), n);	//pow是计算次方的函数，前面1 + r为底数，后面n为指数。 
	p = p * 100;  //计算结果是小数转换为百分数 
	
	printf("十年后我国国民生产总值增长与现在相比增长:%f%%", p);		//格式化输出结果 
    system("pause");
}