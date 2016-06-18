#include<stdio.h>
main()
{
int left, right, extra;
    printf("enter first no.");
    scanf("%d",&left);
    printf("enter second no.");
    scanf("%d",&right);
    extra=right;
    right=left;
    left=extra;
    printf("after swapping");
     printf( " first no. is %d",left);
      printf("\nsecond no. is %d",right);
      }

