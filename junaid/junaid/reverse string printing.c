#include<stdio.h>
#include<string.h>
main()
{
int l,i,t;
char fre[50],gre[50];
printf("Enter a string:");
gets(fre);
l=strlen(fre);
 t=0;
for(i=l-1;i>=0;i--)
 {
   gre[t]=fre[i];
   t++;
 }
 gre[l]='\0';
 printf("%s",gre);
}
