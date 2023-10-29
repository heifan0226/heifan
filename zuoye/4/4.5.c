#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
	int number, squareRoot;
	printf("Enter number: ");
	scanf("%d", &number);
	while(number >= 1000)
    {
		printf("The number is greater than or equal to 1000. Retry!\nEnter number: ");
		scanf("%d", &number);
	}
	squareRoot = (int)sqrt(double(number));
	printf("The square root of the number %d is %d.\n", number, squareRoot);
	system("pause");
	return 0;
}
