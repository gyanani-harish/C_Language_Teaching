#include<stdio.h>
#include<conio.h>
int main()
{
	int pos,temp,a[100]={5,4,6,9},i,n;
	printf("enter a no");
	scanf("%d",&n);
	printf("enter position");
	scanf("%d",&pos);
	for(i=3;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=n;
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}
