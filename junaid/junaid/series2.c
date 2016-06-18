#include<stdio.h>
main()
 {
 int i,a=1,b=1,c,n;
 printf("Enter a number to generate series.");
 scanf("%d",&n);

 printf("%d, %d,",a,b);
 for(i=1;i<=n;i++)
   {
    c=a+b;
    printf("%d,",c);
    a=b;
    b=c;
   }

 }
