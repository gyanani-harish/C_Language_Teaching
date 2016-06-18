#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	char a;
	p=fopen("yashu6.txt","w");
	if(p)
	{
		printf("opened\n");
		fputs("hello i m yashu",p);
	}
	else
	{
		printf("not opened\n");
	}


	fclose(p);
	getch();
}
