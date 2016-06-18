#include<stdio.h>
int sa(int a[],int n)
{
 int i,d=0;
 for(i=0;i<n;i++)
  {
   d+=a[i];
  }

return(d);
}

main()
{
 int a[100],i,n,sum;
 printf("how many numbers do you want to enter?");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  sum=sa(a,n);
  printf("%d",sum);
}
