#include<stdio.h>
main()
 {
 int i,e=0,gap=0,n;
 printf("Enter a number to generate series.");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
   {


     printf("%d ,",e);
     gap=gap+5;
     e=e+gap;
   }

 }
