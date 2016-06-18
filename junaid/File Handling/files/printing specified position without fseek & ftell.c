#include<stdio.h>
#include<string.h>
main()
{
 FILE *x;
 char c[200];
 int i,l;
 x=fopen("names.txt","r");
 i=0;
 while((c[i]=fgetc(x))!=EOF)
  {
   i++;
}
     for(i=0;i<l;i++)
     {
         if(i>=3 && i<=6)
        {
            printf("%c - position %d\n",c[i],i);
        }
     }
  fclose(x);
}
