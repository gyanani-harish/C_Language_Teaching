#include<stdio.h>
main()
{
 int i,j,n,t,s;
 t=3-1;
 for(i=1;i<=3;i++)
  {
    for(s=1;s<=t;s++)
    {
     printf(" ");
     }
     for(j=1;j<=i;j++)
     {
       printf("#");
     }

    printf("\n");

    t--;
  }
}
