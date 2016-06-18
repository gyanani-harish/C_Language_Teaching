#include<stdio.h>
main()
{
 int a,b,x;
 printf("Enter a number");
 scanf("%d",&x);
 while(x!=0)
   {
       a=x%2;
       printf("%d",a);
       x=x/2;
   }

}
