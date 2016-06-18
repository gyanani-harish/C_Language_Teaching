#include<stdio.h>
main()
{
 int a[2][2],b[2][2],i,j,c[2][2];

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
       c[0][0]=a[0][0]*b[0][0]+a[1][0]*b[0][1];
       c[0][1]=a[0][0]*b[1][0]+a[1][0]*b[1][1];
       c[1][0]=a[0][1]*b[0][0]+a[1][1]*b[0][1];
       c[1][1]=a[0][1]*b[1][0]+a[1][1]*b[1][1];

       printf("\t\tMultiplication of matrix:\n");
    printf("----------------------------------------\n");
     for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
       {
        printf("\t %d",c[i][j]);
       }
       printf("\t \n");
    }

}
