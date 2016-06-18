#include<stdio.h>
main()
{
	FILE *y;
	int count=0;
	char ch;
	y=fopen("E:\\junaid\\File Handling\\temp files\\bangd.txt","r");
	while((ch=fgetc(y))!=EOF)
	{
		if(ch=='me')
		{
			count++;
		}
	}
	count++;
	printf("%d",count);
	fclose(y);
}
