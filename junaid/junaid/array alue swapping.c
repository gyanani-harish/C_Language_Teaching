#include<stdio.h>
main()
{
 int a,b,c,i,n,x[6],v=0;
 printf("Values in array before swapping:");
      for(i=1;i<=6;i++)
        {
          x[i-1]=i;
          printf("%d",x[i-1]);
        }

     a=x[0];
     b=x[1];
     c=x[2];
     x[0]=x[3];
     x[1]=x[4];
     x[2]=x[5];
     x[3]=a;
     x[4]=b;
     x[5]=c;

    printf("\nValues in array after swapping:");
    for(i=1;i<=6;i++)
        {

          printf("%d",x[i-1]);
        }

}
