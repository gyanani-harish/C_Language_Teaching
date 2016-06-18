#include<stdio.h>
#include<string.h>
main()
{
	FILE *y;
	int i,j,f,s,d,x;
	int count=0;
	char ch[1000];
	y=fopen("E:\\junaid\\File Handling\\temp files\\efr.txt","r");
	for(i=0;(ch[i]=getc(y))!=EOF;i++)
    {
     printf("");
	}
	ch[i]='\0';
	f=strlen(ch);
	 printf("%d",f);
	for(j=0;j<=i;j++)
    {
        if(ch[j]==' ')
        {
           if(ch[j+1]=='a')
           {
              if(ch[j+2]==' ');
              {

                ch[j+1]='p';


              }
           }
        }


    }
f=strlen(ch);
	 printf("%d",f);


	fclose(y);
   y=fopen("E:\\junaid\\File Handling\\temp files\\efr.txt","w");
   fputs(ch,y);
   fclose(y);

}

