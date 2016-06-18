#include<stdio.h>
main()
{
int a[50],b[50],temp=0,l,j,i;
printf("\tArray for swapping two values.");
printf("\nHow much numbers you wanna enter?: ");
scanf("%d",&l);
printf("Enter: ");


for(i=0;i<l;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<l;i+=2)
 {
  b[temp]=a[i];
  temp++;
 } j=0;
 for(i=1;i<l;i+=2)
 {
 for(;j<i;j+=2)
  {
   a[j]=a[i];
  }
 }
 temp=0;
for(i=1;i<l;i+=2)
{
   a[i]=b[temp];
   temp++;
}
for(i=0;i<l;i++)
{
   printf("%d",a[i]);
}
}
