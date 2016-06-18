#include<stdio.h>
#include<string.h>
main()
{
 int i,l,c=0,d=0;
 char a[50];
 printf("Enter a string: ");
 gets(a);
 l=strlen(a);
 for(i=0;i<l;i++)
  {
    a[i]=tolower(a[i]);
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
     {
       c++;
     }
    else
     {
      d++;
     }

  }
  printf("vowels in the sentance are: %d and consonents  are: %d",c,d);
}
