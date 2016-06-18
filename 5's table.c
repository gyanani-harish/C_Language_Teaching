#include<stdio.h>
main()
{
    int i,n,y;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        y=n*i;
        printf("%d * %d = %d\n",n,i,y);
    }
}
