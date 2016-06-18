#include<stdio.h>
#include<string.h>
char charAt(char name[],int length,int idx)
  {
      char t;
   if(idx<0 && idx>=length)
   {
        t= '7';
   }
   else
   {
         t=name[idx];
   }
   return t;

  }
  main()
  {
   char name[20],ans;
   int pos;
   printf("Enter a word: ");
   scanf("%s",name);
   printf("enter index: ");
   scanf("%d",&pos);
   ans=charAt(name,strlen(name),pos);
  //ans=name[pos];
  printf("\tANS>>%c",ans);
  printf("(%d)",ans);

  }
