#include<stdio.h>
main()
{
int i,a[50],b,c;
printf("Enter numbers");
i=0;
 do
   {
    scanf("%d",&a[i]);
    i++;
   }while(a[i-1]!=0);

 for(i=0;a[i]!=0;i++)
     {
       printf("%d\t",a[i]);
     }

}
