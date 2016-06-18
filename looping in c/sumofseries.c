#include<stdio.h>
#include<conio.h>
int main()
{
	float i,divd,sum=0,n;
	printf("enter a no");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		divd=1/i;
		sum=sum+divd;
	}
	printf("%f",sum);
	getch();
}
