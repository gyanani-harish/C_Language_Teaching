#include<stdio.h>
main()
{
  int a,x,i;
  printf("Enter a hexadecimal number");
  scanf("%d",&x);
  for(i=0;x!=0;i++)

    {
     a=x%16;

     if(a==10)
     {
        printf("A");
     }
     else if(a==11)
     {
        printf("B");
     }
     else if(a==12)
     {
        printf("C");
     }
     else if(a==13)
     {
        printf("D");
     }
     else if(a==13)
     {
        printf("E");
     }
     else if(a==15)
     {
        printf("F");
     }
     else
     {
         printf("%d",a);
     }
  x=x/16;

    }

  }
