#include<stdio.h>
main()
{
  int a,x,i;
  printf("Enter a hexadecimal number");
  scanf("%d",&x);
  for(i=0;x!=0;i++)

    {
     a=x%16;
     switch(a)
     {
     case 10: printf("A");
     break;
     case 11: printf("B");
     break;
     case 12: printf("C");
     break;
     case 13: printf("D");
     break;
     case 14: printf("E");
     break;
     case 15: printf("F");
     break;
     default : printf("%d",a);
     }
     x=x/16;

    }

}
