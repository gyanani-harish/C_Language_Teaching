#include<stdio.h>
void selection(int a[],int n)
{
    int i,temp,min,j,minindex;
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
}
main()
{
 int p=0,a[50],n,temp,i,min,minindex,j;
 printf("how much numbers you want to enter:");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);

   }
  selection(a,n);
     for(i=0;i<n;i++)
     {
       printf("%d",a[i]);
     }

}
