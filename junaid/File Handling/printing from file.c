#include<stdio.h>
main()
{
    int i;
    char t;
 FILE *y;
 y=fopen("E:\\junaid\\File Handling\\temp files\\my name.txt","r");

 if(y)
	{
		printf("opened\n");
		for(i=1;i<=50 && (t=fgetc(y))!=EOF;i++)
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
}
