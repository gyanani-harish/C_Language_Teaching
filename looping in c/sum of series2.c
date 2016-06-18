#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x,a,sum=0;
	printf("enter a no");
	scanf("%d",&n);
	printf("enter a no");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		a=x*i;
		sum=sum+a;
	}
	sum++;
	printf("%d",sum);
	getch();
}
