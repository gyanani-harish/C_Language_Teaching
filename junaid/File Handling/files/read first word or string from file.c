#include<stdio.h>
#include<string.h>
main()
{
 FILE *y=fopen("names.txt","r");
 char arr[100];
 fscanf(y,"%s",arr);
 printf("%s",arr);
 }
