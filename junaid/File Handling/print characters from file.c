#include<stdio.h>
main()
{
 FILE *y;
	int i,k,j=0;
	int count=0;
	char ch;
	y=fopen("E:\\junaid\\File Handling\\temp files\\efr.txt","r");
	for(i=0;(ch=getc(y))!=EOF;i++)
    {
       if(i>=0 && i<=5)
        {
            printf("%c\t",ch);
        }
	}
	fclose(y);
}
