#include <stdio.h>
#include <windows.h>
int main()
{
    double sum = 1.0;
	for(int i=2;i<=100;i++)
    {
		if(i%2==0){
			sum = sum - 1.0/i;
		}else{
			sum = sum + 1.0/i;
		}
	}
	printf("%f\n",sum);
    system("pause");
	return 0;
}