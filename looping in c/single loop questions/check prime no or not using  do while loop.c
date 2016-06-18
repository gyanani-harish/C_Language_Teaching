#include<stdio.h>
#include<conio.h>
int main()
{
	int i=2,n;
	printf("enter a no");
	scanf("%d",&n);
	do
	{
		if(n%i==0)
		{
			printf("not prime");
			break;
		}
		i++;
	}while(i<=n-1);
	if(n==i)
	{
		printf("prime no");
	}
	getch();
}
