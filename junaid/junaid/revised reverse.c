#include<stdio.h>
main()
{
    int x,n,i;
printf("Enter a number");
scanf("%d",&n);
for(i=0;n!=0;i++)
    {
     x=n%10;
     printf("%d",x);
     n=n/10;
   }




}
