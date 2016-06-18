#include<stdio.h>
char charAt(char name[],int idx)
  {
   int i;
   char n;
   for(i=0;i!='\0';i++)
    {
     if(i==idx)
      {
       return(name[i]);
      }
     else {

          }

    }
   return(n);

  }
  main()
  {
   char name[20],pos,ans,n;
   printf("Enter a word: ");
   scanf("%s",name);
   printf("enter index: ");
   scanf("%d",pos);
   pos--;
   ans=charAt(name,pos);
   if(ans==n)
        {
            printf("not found");
        }
        else
            {
                printf("%s",ans);
            }

  }
