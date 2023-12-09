#include<stdio.h>
#include<windows.h>
#define N 3
int main()
{
	int i,j,a[N][N],max,sum=0;
	
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
		
		for(i=0;i<N;i++)
		{	
			for(j=0;j<N;j++)
				printf("%-5d",a[i][j]);
			printf("\n");
		}
 
		printf("\n");
		
		
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1;j++)
			if(a[i][j]>a[i][j+1])
				max=a[i][j],a[i][j]=a[i][j+1],a[i][j+1]=max;
			else
				max=a[i][j+1];
		printf("%-3d ",max);
	
	}	
    system("pause");
    return 0;
}