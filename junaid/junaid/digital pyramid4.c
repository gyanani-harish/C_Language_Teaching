#include<stdio.h>
main()
{
 int i,j,n,t,s;
 printf("Enter number to generate pyramid");
 scanf("%d",&n);
 t=n-1;
 for(i=1;i<=n;i++)
  {
    for(s=1;s<=t;s++)
    {
     printf("-");
     }
     for(j=1;j<=i;j++)
     {
       printf("%d",j);
     }

    printf("\n");

    t--;
  }
}
