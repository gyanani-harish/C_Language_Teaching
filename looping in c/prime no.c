//this program displays all prime numbers <=n
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j,prime;
	printf("enter a no");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		 for(j=2;j<=i-1;j++)
		 {
				if(i%j==0)
				{
					break;
				}
		 }
		 if(j==i)
		 {
				printf("%d\n",i);
		 }
	}
	getch();
}
