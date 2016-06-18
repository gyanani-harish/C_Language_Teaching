#include<stdio.h>
main()
{
int n,i,sum=0;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n-1;i++)
  {
     if(n%i==0)
       {
        sum=sum+i;

        }
  }
  if(sum==n)
   {
     printf("this is a perfect number");
   }
   else
   {
      printf("this isn't a perfect number");
   }

}
