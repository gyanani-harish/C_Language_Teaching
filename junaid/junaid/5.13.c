#include<stdio.h>
main()
{
 int i,sum=0,v=0;
 for(i=1;i<=100;i++)
  {
   if((i%6==0) && (i%4!=0))
    {
        v=v++;
     sum=sum+i;
    }
  }
  printf("Sum of divisibles of 6 is:%d",sum);
  printf(" \t&  number of values are: %d",v);
}
