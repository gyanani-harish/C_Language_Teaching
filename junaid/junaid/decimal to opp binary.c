#include<stdio.h>

main()
{
 int a,b,x,i,l;
 int ex[100];
 printf("Enter a decimal number to get it into binary:");
  scanf("%d",&x);
 for(i=0;x!=0;i++)
   {
       a=x%2;
       ex[i]=a;
       //printf("%d",ex[i]);
       x=x/2;
   }i--;
   for(;i>=0;i--)
   {
       printf("%d",ex[i]);
   }
}
