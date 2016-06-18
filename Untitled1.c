#include<stdio.h>
main()
{
    int left,right,extra;
    printf("enter right no");
    scanf("%d",&right);
    printf("enter left no");
    scanf("%d",&left);
    extra=right;
    right=left;
    left=extra;
    printf("right=%d\n,left=%d",right,left);
}
