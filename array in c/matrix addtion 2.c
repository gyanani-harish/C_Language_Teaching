#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("enter 1 matrix value");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2 matrix value");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("enter 3 matrix value\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n\n");
	}
	












}
