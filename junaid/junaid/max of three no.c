#include<stdio.h>
main()
{
int a,b,c,d;
    printf("enter first no.");
    scanf("%d",&a);
    printf("enter second no.");
    scanf("%d",&b);
    printf("enter third no.");
    scanf("%d",&c);
    if(a>=b && a>=c)
    {
    printf("%d",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d",b);
    }
    else
    {
     printf("%d",c);
    }




}
