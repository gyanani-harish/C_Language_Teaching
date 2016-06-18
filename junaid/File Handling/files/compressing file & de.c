#include<stdio.h>
#include<string.h>
main()
{
 FILE *x,*y;
 int check1,check2,i,l;
char c[9],cp,cd[15];
printf("Type C to compress & D to decompress file:");
scanf("%c",&cp);
if(cp =='c' || cp =='C')
{
    printf("\nType the name of file you want to compress:");
    scanf("%s",cd);
     x=fopen(cd,"r");
     y=fopen("compressed.txt","w");
     while(!feof(x))
       {
         fscanf(x,"%s",c);
         check1=strcmp(c,"This");
         check2=strcmp(c,"is");
           if(check1==0)
            {
             fprintf(y,"a ");
            }
         else if(check2==0)
           {
            fprintf(y,"b ");
           }
           else
           {
               fprintf(y,"%s ",c);
           }

        }
        for(i=0;c[i]!=EOF;i++)
        {
            c[i]=fgetc(y);
        }

l=strlen(y);
        c[l-1]='\0';
        for(i=0;i<l;i++)
        {
            fprintf(y,"%s",c);
        }

        printf("Compression successful!");
}
if(cp=='d' || cp=='D')
{
    printf("\nType the name of file you want to decompress:");
    scanf("%s",cd);
     x=fopen(cd,"r");
     y=fopen("decompressed.txt","w");
     while(!feof(x))
       {
         fscanf(x,"%s",c);
          check1=strcmp(c,"a");
         check2=strcmp(c,"b");

         if(check1==0)
            {
             fprintf(y,"This ");
            }
         else if(check2==0)
           {
            fprintf(y,"is ");
           }
           else
           {
               fprintf(y,"%s ",c);
           }
        }


        printf("Decompression successful!");
}

fclose(x);
fclose(y);

}
