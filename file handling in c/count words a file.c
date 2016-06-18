#include<stdio.h>
#include<conio.h>
int main()
{
	int count=0;
	char ch;
	FILE *y;
	y=fopen("fight.txt","r");
	while((ch=fgetc(y))!=EOF)
	{
		if(ch==32)
		{
			count++;
		}
		
	}
	count++;
	printf("%d",count);
	fclose(y);
	getch();
}
