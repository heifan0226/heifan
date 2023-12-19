#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
double Round(double x, int d)
{
	double m;
	x *= pow(10,d);
	if (x > 0)
		m = (int)(x + 0.5) / pow(10,d);
	else
		m = (int)(x - 0.5) / pow(10,d);
    return(m);
}
 
int main()
{
	double x;
	int d;
	scanf("%lf %d",&x,&d); 
	printf("%.6lf\n",Round(x,d));
    system("pause");
	return 0;
}