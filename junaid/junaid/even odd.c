#include<stdio.h>
main()
{
    int a,n;
    printf("Enter a number to check odd/even.");
    scanf("%d",&n);
    a=n%10;
    if(a%2==0)
     {
      printf("It's an even number");

     }
    else
    {
     printf("It's an odd number");
    }

}
