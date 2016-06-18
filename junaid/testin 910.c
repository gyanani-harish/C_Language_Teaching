#include<stdio.h>
main()
{
int a[50],b[50],temp=0,l,j,i;
printf("Enter numbers in array for swapping");

 printf("\nEnter: ");
 for(i=0;i<6;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<=5;i+2)
   {
    b[temp]=a[i];
    temp++;
   }
 /* for(i=0;i<temp;i++)
   {
   printf("%d\n",b[i]);
   }
*/
/*
for(i=5;i>=0;i-2)
{
  for(j=4;j>=0;j-2)
   {
    a[j]=a[i];
   }
}
temp=0;
for(i=1;i<=4;i++)
 {
  a[i]=b[temp];
  temp++;
 }*/
 for(i=0;i<=5;i++)
  {
   printf("%d",a[i]);
  }
}
