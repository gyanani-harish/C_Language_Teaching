#include<stdio.h>
main()
{
    int sum=0,x,n,i=0;
printf("Enter a digits to get sum");
scanf("%d",&n);
for(i=0;n!=0;i++)
    {
     x=n%10;
     sum=sum+x;
     n=n/10;

   }

printf("%d",sum);


}
