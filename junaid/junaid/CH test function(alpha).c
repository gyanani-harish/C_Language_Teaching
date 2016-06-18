#include<stdio.h>
#include<ctype.h>
main()
{
   printf("Enter a character");
char alphabet=getchar();
   if(isalpha(alphabet))
     {
      printf("it's a  alphabet. ");
     }
   else
     {
      printf("It's not a alphabet");
     }

}
