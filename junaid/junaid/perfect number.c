#include<stdio.h>
main()
{
    int sum=0,n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1; i<=n-1; i++)
    {
        if(n%i==0)
        {
           // printf("%d\n",i);
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("perfect");
    }
    else
    {
        printf("not perfect");
    }
}

