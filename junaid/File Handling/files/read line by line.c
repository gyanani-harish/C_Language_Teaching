#include<stdio.h>
#include<string.h>
main()
{
 FILE *y=fopen("names.txt","r");
 char arr[100];
 fscanf(y,"%[^\n]",arr);
 printf("%s",arr);
 fclose(y);
 }
