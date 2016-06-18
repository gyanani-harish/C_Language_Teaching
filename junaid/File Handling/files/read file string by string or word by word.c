#include<stdio.h>
main()
{
 FILE *y=fopen("names.txt","r");
 char arr[100];
    while(!feof(y))
    {
        fscanf(y,"%s",arr);
        printf("%s\n",arr);
    }
fclose(y);
 }
