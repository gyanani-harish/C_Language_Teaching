#include<stdio.h>
#include<string.h>
main()
{
 char pen[50],den[13];
 printf("Enter to any two srings:");
 scanf("%s %s",&pen,&den);
 strcat(pen,den);
 puts(pen);
}
