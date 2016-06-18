#include<stdio.h>
main()
{
      int i,n,max,x[50],n2=0,en=0;
      printf("enter how many numbers");
     scanf("%d",&n);
      for(i=0;i<=n-1;i++)
       {
         scanf("%d",&x[i]);
       }
     printf("Which number do you want to check?");
     scanf("%d",&n2);
      for(i=0;i<=n-1;i++)
       {
         if(n2==x[i])
         {
          en++;
         }

       }
       printf("occurence of checked number is: %d",en);

}
