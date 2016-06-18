#include<stdio.h>
main()
{
 int i,j,n,jj;
printf("Enter a number to generate series.");
 scanf("%d",&n);
 jj=1;
  for(i=1;i<=n;i++)
   {
 if(i%2==1)
  {
   jj=1;
  }
 else
   {
    jj=0;
   }


 for(j=0;j<=i;j++)
   {
    if(jj==1)
     {
      printf("1");
      jj=0;
     }
    else
      {
       printf("0");
       jj=1;
      }
   }

      printf("\n");
   }

}
