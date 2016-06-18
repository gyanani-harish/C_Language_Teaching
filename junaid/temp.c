#include<stdio.h>
#include<string.h>
#include<junaid.h>

main()
{
 int i,x;
 char arr[100];
 printf("enter a sentence");
 gets(arr);
 x=strlen(arr)-1;
 for(i=strlen(arr)-1;i>=0;i--)
 {
    if(arr[i]==' ')
    {
        substr(arr,i+1,x);
        printf(" ");
        x=i-1;
    }
 }
 substr(arr,0,x);
 }
