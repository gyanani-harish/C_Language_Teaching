#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[5];//declaring array
	a[0]=5;//initializing array variables
	a[1]=89;
	a[2]=78;
	a[3]=78;
	a[4]=456;
	for(i=0;i<=5-1;i++)
	{//printing all array values using loop
		printf("%d\t",a[i]);
		}

 	getch();
}
