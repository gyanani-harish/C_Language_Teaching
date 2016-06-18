#include<stdio.h>
int nm(int a,int b,int c)
{
    int x;
 if(a>=b && a>=c)
  {
    x=a;
  }
 else if(b>=a && b>=c)
  {
   x=b;
  }
 else
  {
   x=c;
  }
  return x;
}
main()
{
    int x,a,b,c;
 printf("Enter 3 numbers to get greatest:");
 scanf("%d %d %d",&a,&b,&c);
 x=nm(a,b,c);
 printf("The greatest number is: %d",x);

}
