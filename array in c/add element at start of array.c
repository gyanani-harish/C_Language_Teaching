//without using 2nd array
#include<stdio.h>
#include<conio.h>
int main()
{
	int copy_n,a[100]={5,4,6,9},n=4,i,extra,t;
	printf("enter a no");
	scanf("%d",&t);
	copy_n=n;
	for(i=0;i<copy_n;i++)
	{
		a[n]=a[n-1];
		n--;
	}
	a[0]=t;
	for(i=0;i<copy_n+1;i++)
	{
		printf("%d\n",a[i]);
	}
	
	getch();
}
