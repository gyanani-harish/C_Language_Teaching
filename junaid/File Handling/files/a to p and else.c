#include<stdio.h>
main()
{
 FILE *y=fopen("names.txt","r");
 char arr[100];
    while(!feof(y))
    {
        fscanf(y,"%s",arr);
        if(arr[0]>=97 && arr[0]<=112)
        {
            printf("%c for %s yes\n",arr[0],arr);
        }
        else
        {
            printf("%c for %s no\n",arr[0],arr);
        }
    }
fclose(y);
 }
