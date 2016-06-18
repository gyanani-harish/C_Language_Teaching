//copying all values of an array to another array
#include<stdio.h>
#include<conio.h>
int main()
{
	int b[100],a[100]={5,4,6,9},n=4,i;
 	for(i=0;i<n;i++)
 	{
		b[i]=a[i];
 	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	getch();
}
