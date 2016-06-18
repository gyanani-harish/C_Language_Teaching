#include<stdio.h>
main()
{
    int a,b,c,d,e;
    printf("enter the value for a");
    scanf("%d",&a);
    printf("enter the value for b");
    scanf("%d",&b);
    printf("enter the value for c");
    scanf("%d",&c);
    printf("enter the value for d");
    scanf("%d",&d);
    printf("enter the value for e");
    scanf("%d",&e);
    if((a<b && a<c && a>d && a>e) ||(a>b && a>c && a<d && a<e))//a1
    {
        printf("%d",a);
    }
    else if((a>b && a>d && a<c && a<e) || (a<b && a<d && a>c && a>e))//a2
    {
        printf("%d",a);
    }
    else if((a>b && a>e && a<c && a<d) ||(a<b && a<e && a>c && a>d))//a3
    {
        printf("%d",a);
    }
    else if((b>c && b>d && b<e && b<a) || (b<c && b<d && b>a && b<a))//b1
    {
        printf("%d",b);
    }
    else if((b<c && b<e && b>d && b>a) || (b>c && b>e && b<d && b<a))//b2
    {
        printf("%d",b);
    }
    else if((b<c && b<a && b>d && b>e) || (b>c &&b>a && b<d && b<e))//b3
    {
        printf("%d",b);
    }
    else if((c>a && c>b && c<d && c<e) || (c<a && c<b && c>d && c>e))//c1
    {
        printf("%d",c);
    }
    else if((c>a && c>d && c<b && c<e) || (c<a && c<d && c>b && c>e))//c2
    {
        printf("%d",c);
    }
    else if((c>a && c>e && c<b && c<d) || (c<a && c<e && c>b && c>d))//c3
    {
        printf("%d",c);
    }
    else if((d>a && d>b && d<c && d<e) || (d<a && d<b && d>c && d>e))//d1
    {
        printf("%d",d);
    }
    else if((d>a && d>c && d<b && d<e) || (d<a && d<c && d>b && d>e))//d2
    {
        printf("%d",d);
    }
    else if((d>a && d>e && d<b && d<c) || (d<a && d<e && d>b && d>c))//d3
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",e);

    }



}
