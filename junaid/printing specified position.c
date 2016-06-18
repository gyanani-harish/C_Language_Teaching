#include <stdio.h>
main ()
{
   FILE *fp;
    char c;
    int pos;
   fp = fopen("names.txt","r");
   fseek( fp, 2, SEEK_SET );
   while((c=fgetc(fp))!=EOF)
   {
     pos=ftell(fp);
     if(pos>=3 && pos<=6)
       printf("%c - position : %d\n",c,ftell(fp));
   }
   fclose(fp);
}
