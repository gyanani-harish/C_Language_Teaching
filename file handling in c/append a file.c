#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	char a;
	p=fopen("yashu65.txt","a");
	if(p)
	{
		printf("opened\n");
		fputs("hello i m yashu\n",p);
	}
	else
	{
		printf("not opened\n");
	}


	fclose(p);
	getch();
}
