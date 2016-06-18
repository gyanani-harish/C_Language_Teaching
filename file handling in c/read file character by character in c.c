#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *y;
	char t;
	y=fopen("yashurocks.c","r");
	if(y)
	{
		printf("opened\n");
		for(;(t=fgetc(y))!=EOF;)
		{
		//fgetc is used to read a character from file
		printf("%c",t);
		}
	}
	else
	{
		printf("not opened\n");
	}
	
	fclose(y);
	getch();
}
