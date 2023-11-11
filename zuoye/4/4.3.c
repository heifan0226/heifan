#include<stdio.h>
#include<windows.h>
int main()
{
	int a = 3, b = 4, c = 5, n, x, y, v;
	printf("Please enter number:");
	scanf("%d", &n);
	switch(n)
	{
	case 1: v = a+b>c && b == c; break;
	case 2: v = a||b+c && b-c; break;
	case 3: v = !(a>b) && !c||1; break;
	case 4: v = !(x=a) && (y=b) && 0; break;
	case 5: v = !(a+b)+c-1 && b+c/2; break;
	default: printf("Error!\n"); break;
	}
	if (v >=1 && v <=5)
		printf("v%d value is %d\n", n, v);
	system("pause");
	return 0;
}
