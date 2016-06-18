#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *y;
	int count=0;
	char ch;
	y=fopen("hh.txt","r");
	while((ch=fgetc(y))!=EOF)
	{
		count++;
    }
    printf("%d",count);
	fclose(y);
	getch();
}
