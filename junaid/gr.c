#include<stdio.h>
main()
{
int a[50],b[50],temp=0,l,j,i;
printf("Enter numbers in array for swapping");


 for(i=0;i<=5;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<=5;i+2)
   {
    b[temp]=a[i];
    temp++;
   }
   for(i=0;i<temp;i++)
  {
   printf("%d",b[i]);
  }
}
