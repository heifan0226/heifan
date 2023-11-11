#include <stdio.h>
#include <windows.h>
int main()
{
	int x, y;
	printf("Enter X Value: ");
	scanf("%d", &x);
	if(x < 1)
    {
		y = x;
	}
	else if(x >= 1 && x < 10)
    {
		y = 2 * x -1;
	}
	else
    {
		y = 3 * x - 11;
	}
	printf("Y Value = %d\n", y);
	system("pause");
	return 0;
}
