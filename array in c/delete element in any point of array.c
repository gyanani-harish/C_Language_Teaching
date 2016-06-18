#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,pos,a[100];
	printf("enter how many no.");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a no.");
		scanf("%d",&a[i]);
	}
 	printf("enter position");
 	scanf("%d",&pos);
 	for(i=pos;i<n;i++)
 	{
		a[i-1]=a[i];
	}
  	for(i=0;i<n-1;i++)
 	{
		printf("%d",a[i]);
 	}
 getch();
}
