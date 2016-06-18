#include<stdio.h>
#include<math.h>
main()
{
 int rr,a,hd,i,x,y,hex=0;
 printf("Enter a hexadecimal number");
 scanf("%d",&x);

    for(i=0;x!=0;i++)
    {
     a=x%10;
     rr=pow(16,i);
        hd=rr*a;
        hex=hex+hd;
        x=x/10;
   }
printf("%d",hex);
}
