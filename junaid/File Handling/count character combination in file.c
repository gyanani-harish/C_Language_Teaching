#include<stdio.h>
main()
{
	FILE *y;
	int i,j;
	int count=0;
	char ch[1000];
	y=fopen("E:\\junaid\\File Handling\\temp files\\efr.txt","r");
	for(i=0;(ch[i]=getc(y))!=EOF;i++)
    {
        if(ch[i]=='m')
        {

            for(j=1;(ch[i]=getc(y))!=EOF;j++)
            {
              if(ch[i]=='e')
                {
                  count++;
                }
                break;

            }
        }
	}
	printf("%d",count);
	fclose(y);


}
