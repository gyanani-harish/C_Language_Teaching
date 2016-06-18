#include<stdio.h>
 main()
 {
   int i,j,n,s;
   printf("Enter number to generate pyramid");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
      {
      if(j==i)
      {
        printf("%d",j);

      }

          for(s=2;s<=i;s++)
      {
        if(s==i)
        {
            printf("*");
        }
        else
         {
           printf("%d",n);
         }
      }
         }
      }





      printf("\n");
    }

