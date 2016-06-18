#include<stdio.h>
main()
{
 int p=0,a[50],n,temp,i,min,minindex,j;
 printf("how moch numbers you want to enter:");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);

   }
   for(i=0;i<n;i++)
     {
      min=a[i];
      minindex=i;
      for(j=i+1;j<n;j++)
        {
         if(min>a[j])
          {
           min=a[j];
           minindex=j;
          }
        }
        temp=a[i];
        a[i]=a[minindex];
        a[minindex]=temp;

     }
     for(i=0;i<n;i++)
     {
       printf("%d",a[i]);
     }

}
