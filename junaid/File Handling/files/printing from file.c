#include<stdio.h>
main()
{
 FILE *y;
 char num;
 y=fopen("E:\\junaid\\File Handling\\files\\xyz.txt","r");
  while((num=getc(y))!=EOF)
   {
    printf("%c",num);
   }
   fclose(y);
}
