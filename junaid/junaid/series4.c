#include<stdio.h>
main()
{
 int i,a,b,n;
 printf("Enter a number to generate series.");
 scanf("%d",&n);
 printf("1,");
  for(i=2;i<=n;i++)
   {


     a=i*i*i;
     b=a+1;
     printf("%d ,",b);
   }

 }
