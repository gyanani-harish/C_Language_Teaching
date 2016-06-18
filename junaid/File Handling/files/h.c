#include<stdio.h>
#include<string.h>
main()
{
 FILE *y,*a,*b;
 char names[300];
 int l,i;
 y=fopen("names.txt","r");
 a=fopen("a to p.txt","w");
 b=fopen("q to z.txt","w");
 while(!feof(y))
  {

  fscanf(y,"%s",names);

  }
  l=strlen(names);
  for(i=0;i<l;i++)
    {
    strlwr(names);

       if(names[i]=='a'||names[i]=='b'||names[i]=='c'||names[i]=='d'||names[i]=='e'||names[i]=='f'||names[i]=='g'||names[i]=='h'||names[i]=='i'|| names[i]=='j'||names[i]=='k'||names[i]=='l'||names[i]=='m'||names[i]=='n'||names[i]=='o'||names[i]=='p')
    {
      while(names[i]!='\n')
        {
         fprintf(a,"%s",names);
         i++;
        }
        fprintf(a," ");
      }
      else
      {
        while(names[i]!=' ')
        {
         fprintf(b,"%s",names);
         i++;
        }
        fprintf(a," ");
      }
     }
     fclose(y);
     fclose(b);
     fclose(a);
    }

