#include<stdio.h>
void strlwrx(char arr[])
{
    int i;
    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i]=arr[i]+32;
        }
    }
}
main()
{
    char t[]="HARisH";
    strlwrx(t);
    printf("%s",t);
}
