#include<stdio.h>
main()
{
int a[50],b[50],temp=0,n,j,i;
printf("\tArray for swapping two values.");
printf("\nHow much numbers you wanna enter?: ");
scanf("%d",&n);
printf("Enter: ");
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i+=2)
  {
   temp=a[i];
   a[i]=a[i+1];
   a[i+1]=temp;
  }
for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
}
