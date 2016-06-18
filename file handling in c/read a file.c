#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	char a;
	p=fopen("yashu.txt","r");
	if(p)
	{
		printf("opened\n");
		for(;(a = fgetc(p))!=EOF;)
		{
			//read a = fgetc(p)
			printf("%c",a);//write
		}
	}
	else
	{
		printf("not opened\n");
	}
	

	fclose(p);
	getch();
}
