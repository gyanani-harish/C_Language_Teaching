#include<stdio.h>
main()
{
    int a,n;
 printf("Enter a number");
 scanf("%d",&n);
 while(n!=0)
 {
  a=n%10;
  printf("%d",a);

  n=n/10;
 }
}
