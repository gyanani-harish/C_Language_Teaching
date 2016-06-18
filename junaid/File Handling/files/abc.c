#include<stdio.h>
#include<string.h>
main()
{
	char a[15]="file",b[50]="E:\\junaid\\File Handling\\files\\";

int i;FILE *p;
p=fopen("E:\\junaid\\File Handling\\files\\xyz.txt","w");
fclose(p);
	/*for(i=1;i<=9;i++)
    {
        a[4]=i+48;
        a[5]='\0';
        strcat(a,".txt");
strcat(b,a);
        p=fopen(b,"w");
        printf("%s\n",a);
    }*/

}
