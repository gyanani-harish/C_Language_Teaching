#include<stdio.h>
 main()
 {
   int i,j,n;
   printf("Enter number to generate pyramid");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
     for(j=1;j<=n;j++)
      {
       printf("%d",i);
      }
      printf("\n");
    }
 }
