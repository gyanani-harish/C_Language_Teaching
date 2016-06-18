#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[10];//declaring and intializing array
	for(i=0;i<=10-1;i++)
	{//intializing array using loop
		a[i]=(i+1)*2;
		}
	for(i=0;i<=10-1;i++)
	{//printing array using loop
		printf("%d\n",a[i]);
		}



 	getch();
}
