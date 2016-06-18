#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a no");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
        if(n%i==0)
		{
			printf("not prime");
			break;
		}
	}
	if(n==i)
    {
	    printf("prime no");
	}
}
