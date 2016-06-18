#include<stdio.h>
main()
{
      int i,n,max,x[50];
     printf("enter how many numbers");
     scanf("%d",&n);
for(i=0;i<=n-1;i++)
      {
          printf("enter a number");
          scanf("%d",&x[i]);
    }
    max=x[0];
    for(i=1;i<=n-1;i++)
      {
                  if(x[i]>max)
                  {
                   max=x[i];
                  }
      }
       printf("The maximum value is%d",max);
}
