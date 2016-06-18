#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("enter the value for a");
    scanf("%d",&a);
    printf("enter the value for b");
    scanf("%d",&b);
    printf("enter the value for c");
    scanf("%d",&c);
    printf("enter the value for d");
    scanf("%d",&d);
    if(a>=b && a>=c && a>=d)
    {
        printf("%d",a);
    }
    else if(b>=a && b>=c && b>=d)
    {
        printf("%d",b);
    }
    else if( c>=a && c>=b && c>=d)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",d);
    }

}
