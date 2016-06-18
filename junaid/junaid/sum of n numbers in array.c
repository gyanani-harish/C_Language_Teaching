#include<stdio.h>
main()
{
 int a[100],i,n,d=0;
 printf("how many numbers do you want to enter?");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
  {

   scanf("%d",&a[i]);
   d+=a[i];


  }

  printf("\nSum of numbers you entered.%d\t",d);
}
