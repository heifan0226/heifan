//��ɸѡ����100���ڵ�����
#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
	int i,j,k=0,a[100];
 
	for(i=0;i<100;i++)
	{
		a[i]=i+1;           //��1~100��ֵ��a[0]~a[99]
	}
 
	a[0]=0;                      //�Ȱ�a[0]��ֵΪ0
	for(i=0;i<99;i++)
	{
		for(j=i+1;j<100;j++)
		{
			if(a[i]!=0&&a[j]!=0)
			{
				if(a[j]%a[i]==0)
				{
					a[j]=0;           //�Ѳ��������Ķ���ֵΪ0
				}
			}
		}
	}
 
	printf(" ɸѡ�����100���ڵ�����Ϊ:\n");
	for(i=0;i<100;i++)
	{
		if(a[i]!=0)                  //ѡ��ֵ��Ϊ0������������
		{
		  printf("%4d",a[i]);           
		  k++;
		}
		if(k%10==0)                 //���10��������
		{
			printf("\n");
		}
	}
	printf("\n");
    system("pause");
	return 0;
}