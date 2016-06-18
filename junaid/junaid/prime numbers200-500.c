#include<stdio.h>
main()
{
  int n,i;
  printf("enter a number");
  scanf("%d",&n);

for(i=2; i<=n-1; i++)
{
   {
       if(n%i==0)
       {
          printf("This is not a prime number");
        break;
       }

   }
}
   if(n==i)
   {
     printf("This is a prime number");

   }


}


