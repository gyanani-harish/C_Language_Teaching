#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10]={2,4,6,9},i,key,n=4,pos;
	printf("enter no you want to delete");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			pos=i+1;
			break;
		}
	}
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
