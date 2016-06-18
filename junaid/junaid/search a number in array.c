#include<stdio.h>
main()
{
      int i,n,max,x[50],n2=0,en=0,idx;
      printf("how much numbers you wanna enter: ");
     scanf("%d",&n);
     printf("Enter:");
     for(i=0;i<=n-1;i++)
       {
        scanf("%d",&x[i]);

       }
     printf("Which number do you want to search?");
     scanf("%d",&n2);
     printf("\nSearched number found on");
     for(i=0;i<=n-1;i++)
       {
         if(n2==x[i])
          {
           idx=i+1;
           break;
          }

       }
printf("\n position:%d",idx);

}
