#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	p=fopen("yashu67.ppt","w");
	if(p)
	{
		printf("created");
	}
	else
	{
		printf("not created");
	}
	fclose(p);
	getch();
}
