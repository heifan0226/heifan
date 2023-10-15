#include<stdio.h>
#include<windows.h>
#include<math.h>		//计算圆周率和幂次方需要用到数学库 
 
int main()
{
	float r, C, S1, S2, V1, V2, r2, r3; 
	//定义圆半径r、圆周长C、圆面积S1、圆球表面积S2、圆球体积V1、圆柱体积V2和圆半径r的二次方r2、三次方r3。 
	int h; //定义圆柱高 
	double pi; //定义圆周率 
	
	printf("请输入圆半径r的值："); 
	scanf("%f", &r);		//输入圆半径r的值 = 1.5 也可以是其他任何float型 
	printf("请输入圆柱高h的值：");
	scanf("%d", &h); 		//输入圆柱高h的值 = 3 也可以是其他任何int型 
	pi = acos(-1.0);		//C语言中计算圆周率的公式 
	r2 = pow(r, 2);			//计算圆半径r的二次方 
	r3 = pow(r, 3);			//计算圆半径r的三次方 
	
	C = 2 * pi * r;			//圆周长公式 
	S1 = 2 * pi * r2;		//圆面积公式 
	S2 = 4 * pi * r2;		//圆球表面积公式 
	V1 = (4 / 3) * pi * r3;			//圆球体积公式 
	V2 = pi * r2 * h;		//圆柱体积公式 
	
	printf("圆周长为：%.2f\n", C);		//输出圆周长C，只输出小数点后两位 
	printf("圆面积为：%.2f\n", S1);		//余下同上 
	printf("圆球表面积为：%.2f\n", S2);		
	printf("圆球体积为：%.2f\n", V1);
	printf("圆柱体积为：%.2f\n", V2);
	system("pause");
	return 0; 
}