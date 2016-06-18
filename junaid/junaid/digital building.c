#include<stdio.h>
main()
{
 int i,j,n;
 printf("Enter number to generate pyramid");
   scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
    for(j=n;j>=1;j--)
     {
       printf("%d",j);
     }

    printf("\n");
  }


 }
