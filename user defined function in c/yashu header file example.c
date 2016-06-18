#include<stdio.h>
#include<conio.h>
#include<yashu.h>
int main()
{
	int r,n;
	printf("enter a no to check ");
	scanf("%d",&n);
	r=check_primeno(n);
	if(r==0)
	{
		printf("not prime");
	}
	else if(r==1)
	{
		printf("prime");
	}
	getch();
}
