/*
   *******
    *****
     ***
      *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,z,s,n,t;
	printf("enter how many lines");
	scanf("%d",&n);
	t=n;
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=i-1;s++)
		{
			printf(" ");
		}
		for(z=1;z<=t*2-1;z++)
		{
			printf("*");
		}
		t--;
		printf("\n");
	}
	getch();
}
