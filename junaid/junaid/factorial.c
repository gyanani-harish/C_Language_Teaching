#include<stdio.h>
main()
{
  int i,n,g;
  printf("Enter a number to get factorial:");
  scanf("%d",&n);
  g=n;
  for(i=n-1;i>=1;i--)
   {
     g=g*i;
    }
   printf("Factorial is :%d",g);
}
