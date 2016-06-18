#include<stdio.h>
main()
{
  int a[2][2],b[2][2],i,j;
  printf("\tEnter values in array one.\n");
  printf("--------------------------------------\n");
   for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
       {
        printf("Enter value for %d,%d: ",i,j);
        scanf("%d",&a[i][j]);
       }
    }
    printf("\tEnter values in array two.\n");
  printf("--------------------------------------\n");
   for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
       {
        printf("Enter value for %d,%d: ",i,j);
        scanf("%d",&b[i][j]);
       }
    }
    for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
       {
        a[i][j]=a[i][j]+b[i][j];
       }
    }
    printf("\t\tAddition of matrix:\n");
    printf("----------------------------------------\n");
     for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
       {
        printf("\t %d",a[i][j]);
       }
       printf("\t \n");
    }

}
