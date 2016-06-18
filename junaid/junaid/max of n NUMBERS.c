#include<stdio.h>
main()
{
      int i,n,max,x=0;
     printf("enter how many numbers");
     scanf("%d",&n);
     printf("Enter number");
     scanf("%d",&max);
    for(i=1;i<=n-1;i++)
      {
          printf("enter a number");
          scanf("%d",&x);
                  if(x>max)
                  {
                   max=x;
                  }
      }
       printf("The maximum value is%d",max);
}
