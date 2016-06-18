#include<stdio.h>
main()
{
  int i,n,min,x;
  printf("enter how many number");
  scanf("%d",&n);
  printf("enter a number");
  scanf("%d",&min);
   for(i=1;i<=n-1;i++)
     {
      printf("enter Number");
      scanf("%d",&x);
       if(x<min)
       {
          min=x;
       }
     }
   printf("Minimum number is %d",min);
}
