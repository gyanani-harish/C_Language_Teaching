#include<stdio.h>
main()
{
   int i;
   printf("Enter a year");
   scanf("%d",&i);
   if(i%4==0 && i%100==0 && i%400==0)
   {
    printf("Its a leap year");
   }
   else if(i%4==0 && i%100==0 && i%400!=0)
     {
       printf("Its not a leap year");
     }
   else if(i%4==0 && i%100!=0 && i%400!=0)
    {
     printf("Its a leap year");

    }
   else
   {
     printf("Its not a leap year");

    }
}
