#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,max;
	printf("enter how many no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a no");
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d",max);
	getch();
}
