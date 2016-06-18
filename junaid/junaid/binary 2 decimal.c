#include<stdio.h>
#include<math.h>
main()
{
 int a,bi,i,x,y,dec=0;
 printf("Enter a binary number");
 scanf("%d",&x);

    for(i=0;x!=0;i++)
    {
     a=x%10;
     bi=(pow(2,i))*a;
     dec+=bi;




     x=x/10;


   }
printf("%d",dec);
}
