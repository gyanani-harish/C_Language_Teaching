#include<stdio.h>
#include<conio.h>
int main()
{
	int j,a[100],copy_n,i,n,max_pos,temp;
	printf("enter how many no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a no");
		scanf("%d",&a[i]);
	}
	copy_n=n;
	for(;n>1;n--)
	{
		max_pos=0;
		for(i=0;i<n;i++)
		{
			if(a[max_pos]<a[i])
			{
				max_pos=i;
			}
		}
		temp=a[max_pos];
		a[max_pos]=a[n-1];
		a[n-1]=temp;
	}
	for(i=0;i<copy_n;i++)
	{
		printf("%d\t",a[i]);
		}

	getch();
}
