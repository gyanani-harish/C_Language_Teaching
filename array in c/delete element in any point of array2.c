#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[100]={2,4,6,9},pos;
	printf("enter position=");
	scanf("%d",&pos);
	for(i=pos;i<4;i++)
	{
		a[i-1]=a[i];
	}
	for(i=0;i<3;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}
