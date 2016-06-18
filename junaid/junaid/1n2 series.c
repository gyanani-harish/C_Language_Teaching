#include<stdio.h>
main()
{
 int i,j,n;
 printf("How many lines do you want to print:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
   {
     for(j=1;j<=n;j++)
       {


        if(j==i)
         {
           printf("1");
         }
        else
         {
          printf("2");
         }

       }

       printf("\n");

   }
}
