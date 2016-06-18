#include<stdio.h>
main()
{
    int i,n;
    printf("enter n value");
    scanf("%d",&n);
    for( i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
}
