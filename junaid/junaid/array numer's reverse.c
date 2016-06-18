#include<stdio.h>
main()
{
 int a[100],i;
 printf("how many numbers do you want to enter?");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
  {

   scanf("%d",&a[i]);


  }

  for(i=n-1;i>=0;i--)
  {

   printf("\n%d\t",a[i]);


  }
}
