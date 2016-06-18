#include<stdio.h>
void vc(char a[])
 {
 int i=0,j=0,k;
  for(k=0;k<strlen(a);i++)
   {
    if(a[k]=='a' || a[k]=='e' || a[k]=='i'|| a[k]=='o' || a[k]=='u' || a[k]=='A' || a[k]=='E' || a[k]=='I' || a[k]=='O' || a[k]=='U')
     {
      i++;
     }
     else
     {
      j++;
     }
   }
   printf("Your string has %d vowels & %d consonents",i+1,j);
 }
main()
{
 char a[30];
 printf("enter a string: ");
 scanf("%s",a);

   vc(a);
}
