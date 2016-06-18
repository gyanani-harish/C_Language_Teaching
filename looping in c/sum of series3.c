#include<stdio.h>
#include<conio.h>
int main()
{
	float i,n,x,fact,z,sum=0,a,t;
	printf("enter n no=");
	scanf("%f",&n);
	printf("enter x no=");
	scanf("%f",&x);
	
	for(i=1;i<=n;i++)
	{
		z=i;
		fact=1;
		for(;z>0;z--)
		{
			fact=fact*z;
		}
		a=x/fact;
		sum=sum+a;
	}
    t=1-sum;
	printf("%f",t);
	getch();
}
