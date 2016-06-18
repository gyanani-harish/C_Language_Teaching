#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the value for a");
    scanf("%d",&a);
    printf("enter the value for b");
    scanf("%d",&b);
    printf("enter the value for c");
    scanf("%d",&c);
    if(a<b && a>c)
    {
        printf("%d",a);
    }
    else if(a>b && a<c)
    {
        printf("%d",a);
    }
    else if(b>a && b<c)
    {
        printf("%d",b);
    }
    else if(b<a && b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
}
