#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *y;
	int count;
	char ch;
	fopen("hh.txt","r");
	for(count=0;(ch=fgetc(y))!=EOF;count++)
	{
    }
    printf("%d",count);
	fclose(y);
}
