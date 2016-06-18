#include<stdio.h>
main()
{
char a[30];
int l,i,s=0;
printf("Enter a sectance in array: ");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
 {
  if(a[i]==' ')
   {
    s++;
   }
  else
  {

  }


 }
 printf("%d",s+1);
}
