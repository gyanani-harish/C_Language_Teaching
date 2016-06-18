#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	p=fopen("scan your computer.txt","r");
	if(p)
	{
		printf("opened\n");
		fputs("let's play",p);
	}
	else
	{
		printf("not opened\n");
	}
	fclose(p);
	getch();
}
