//THIS IS A PROGRAM TO DEMONSTRATE CREATE,WRITE AND READ A FILE ALTOGETHER
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *y;
	char t;
	y=fopen("yashuu.txt","w");
	if(y)
	{
		printf("created\n");
		
	}
	else
	{
		printf("not created\n");
	}
	fputs("this is yashu",y);
	fcolse(y);
	y=fopen("yashuu.txt","r");
	if(y)
	{
		printf("opened\n");

	}
	else
	{
		printf("not opened\n");
	}
	for(;(t=fgetc(y))!=EOF;)
		{
		//fgetc is used to read a character from file
		printf("%c",t);
		}
	fclose(y);

	getch();
}
