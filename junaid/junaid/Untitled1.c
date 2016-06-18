#include <stdio.h>

 main()
{
    int t,n,j,k,i;
    printf("Enter a number");
    scanf("%d",&n);
    t=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=t;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
           printf("\n");
           t--;
    }

}
