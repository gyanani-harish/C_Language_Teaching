#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *y;
	int count=0;
	char ch;
	y=fopen("yy.txt","r");
	while((ch=fgetc(y))!=EOF)
	{
		if(ch=='\n')
		{
			count++;
		}
	}
	count++;
	printf("%d",count);
	fclose(y);
	getch();
}
