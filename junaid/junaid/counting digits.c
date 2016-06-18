#include<stdio.h>
main()
{
    int sum=0,x,n,count=0,i;
printf("Enter a digits to count them.");
scanf("%d",&n);
for(i=0;n!=0;i++)
    {
     x=n%10;

     n=n/10;

   }

printf("%d",i);


}
