#include<stdio.h>
main()
{
     int sum=0,n,i,x;

    printf("Enter how many numbers.");
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    {
        printf("Enter a number ");
        scanf("%d",&x);
        sum=sum+x;

    }
    printf("%d",sum);



}
