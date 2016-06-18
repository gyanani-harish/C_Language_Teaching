#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,min;
	printf("enter how many no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a no");
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
	getch();
}
