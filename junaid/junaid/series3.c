#include<stdio.h>
main()
{
 int i,e=3,gap=3,n;
 printf("Enter a number to generate series.");
 scanf("%d",&n);
 printf("1,3,");
  for(i=2;i<=n;i++)
   {

     gap=gap+2;
     e=e+gap;
printf("%d ,",e);
    }
}
