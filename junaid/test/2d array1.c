#include<stdio.h>
main()
{
 int a[2][2],r=0,c=0;
 printf("Enter data in table: ");
 for(r=0;r<2;r++)
   {
     for(c=0;c<2;c++)
       {
         printf("\t%d,%d: ",r,c);
         scanf("%d",&a[r][c]);
       }
   }
    for(r=0;r<2;r++)
   {
     for(c=0;c<2;c++)
       {
         printf("\t%d,%d: ",r,c);
         printf("%d",a[r][c]);
       }
       printf("\n");
   }



}
