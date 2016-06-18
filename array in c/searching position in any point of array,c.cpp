#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,key,n,pos;
	printf("enter how many no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a no");
		scanf("%d",&a[i]);
	}
	printf("enter no you want to search");
	scanf("%d",&key);
	for(i=0;i<=n;i++)
	{
		if(a[i]==key)
		{
			pos=i+1;
			printf("%d",pos);
			break;
		}
	}
	getch();
}
