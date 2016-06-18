#include<stdio.h>
main()
{
 FILE *y=fopen("names.txt","r");
 char arr[100];
    while(!feof(y))
    {
        fscanf(y,"%s",arr);
        printf("%c for %s\n",arr[0],arr);
    }
fclose(y);
 }
