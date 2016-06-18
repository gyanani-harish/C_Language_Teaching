#include<stdio.h>
#include<string.h>
main()
{
    int l,i,t,d,m;
 char pen[50],den[13];
 printf("Enter two strings: ");
 scanf("%s %s",&pen,&den);
 l=strlen(pen);
 m=strlen(den);
 d=0;
 for(i=l;i<=l+m;i++)
  {
    pen[i]=den[d];
    d++;
  }
  pen[l+m]='\0';
  printf("%s",pen);
 }
