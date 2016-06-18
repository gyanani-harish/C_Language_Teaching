#include<stdio.h>
#include<string.h>
void substr(char a[],int start,int end)
{
    int i;
    for(i=start;i<=end;i++)
    {
        printf("%c",a[i]);
    }
}
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
