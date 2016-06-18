#include<stdio.h>
main()
{
 int i,j,n=5,t,s,e;
 t=n-1;e=1;
 for(i=1;i<=n;i++)
  {
    for(s=1;s<=t;s++)
    {
     printf(" ");
     }
     for(j=1;j<=e;j++)
     {
       printf("#");
     }


    printf("\n");
e=e+2;
    t--;
  }
}
