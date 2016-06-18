#include<stdio.h>
#include<conio.h>
int main()
{
	int t,n,fact,i;
	printf("enter a no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=i;
		fact=1;
		for(;t>0;t--)
		{
			fact=fact*t;
		}
		printf("%d\n",fact);
		
	}getch();
}
