#include <stdio.h>
main ()
{
 int a,b,c,d,i,t,product=1;
 printf("Enter four values to get their L.C.M. :  ");
 scanf("%d",&a);
 printf("Next: "); scanf("%d",&b);
 printf("Next: "); scanf("%d",&c);
 printf("Next: "); scanf("%d",&d);
 for(i=2;a!=1|| b!=1 || c!=1 || d!=1 ;)
 {
     t=0;  // for indicaton if any numbers has divided by i or not.
     if(a%i==0)
     {
         a=a/i; t++;
     }
     if(b%i==0)
     {
         b=b/i; t++;
     }
     if(c%i==0)
     {
         c=c/i; t++;
     }
     if(d%i==0)
     {
         d=d/i; t++;
     }
     if(t==0)
     {
         i++;
     }
     else
     {
         product=product*i;
     }

 }
printf("L.C.M. of %d %d %d %d is %d",a,b,c,d,product);
}
