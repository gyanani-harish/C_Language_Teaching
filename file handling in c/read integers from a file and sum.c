#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	int sum=0,number;
	p=fopen("kl.txt","r");
	while((number=getw(p))!=EOF)
	{
		printf("%d\n",number);
        sum=sum+number;
	}
	printf("%d",sum);
	fclose(p);
	getch();
}
