#include<stdio.h>
main()
{
 FILE *y,*z,*x;
 y=fopen("names.txt","r");
 z=fopen("a to p.txt","w");
 x=fopen("q to z.txt","w");
if(y==NULL || x==NULL || z==NULL)
{
    printf("any one of these files not opened successfully");

}
 char arr[100];
    while(!feof(y))
    {
        fscanf(y,"%s",arr);
        if(arr[0]>=97 && arr[0]<=112)
        {
            fprintf(z,"%s\n",arr);
             printf("%s\n",arr);
        }
        else
        {
            fprintf(x,"%s\n",arr);
            printf("\n\n%s",arr);
        }
    }
fclose(y);
fclose(x);
fclose(z);

 }
