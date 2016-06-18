// using 2nd array
#include<stdio.h>
#include<conio.h>
int main()
{
	int j,b[100],a[100]={5,4,6,9},n=4,i,t;
	printf("enter a no");
	scanf("%d",&t);
	b[0]=t;
	for(i=0,j=1;i<n;i++,j++)
	{
		b[j]=a[i];
	}
	for(i=0;i<n+1;i++)
	{
		printf("%d\n",b[i]);
	}
	
	getch();
}
