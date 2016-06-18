#include<stdio.h>
main()
{
 int i,n;
 printf("Enter a number to check it's a prime or not.");
 scanf("%d",&n);
 for(i=2;i<=n-1;i++)
  {
   if(n%i==0)
    {
     printf("It's not a prime number.");
     break;
    }

  }
  if(n==i)
    {
     printf("It's a prime number");
    }
}
