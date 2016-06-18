#include<stdio.h>
void substr(char a[],int start,int end)
{
    int i;
    for(i=start;i<=end;i++)
    {
        printf("%c",a[i]);
    }
}
