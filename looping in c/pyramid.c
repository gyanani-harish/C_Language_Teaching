#include<stdio.h>
#include<conio.h>
int main()
{
	int i,z,n,s;
	printf("enter how many lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
		{
			printf(" ");
		}
		for(z=1;z<=i;z++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}
