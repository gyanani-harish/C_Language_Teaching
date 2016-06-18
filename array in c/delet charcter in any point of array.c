#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,n,pos;
	char a[100];
	printf("enter a string");
	scanf("%s",a);
	printf("enter position");
 	scanf("%d",&pos);
	n=strlen(a);
	 for(i=pos;i<n;i++)
 	{
		a[i-1]=a[i];
	}
  	a[n-1]='\0';//null character
  	printf("%s",a);
 getch();
}
