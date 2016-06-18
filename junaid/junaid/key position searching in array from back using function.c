#include<stdio.h>
int search(int x[],int n, int key)
{
      int i,max,idx;
     for(i=n-1;i>=0;i--)
       {
         if(key==x[i])
          {
           return i+1;
          }
       }
       return -1000;
}
main()
{
int i,n,pos,max,x[50],key,idx;
      printf("how much numbers you wanna enter: ");
     scanf("%d",&n);
     printf("Enter:");
     for(i=0;i<=n-1;i++)
       {
        scanf("%d",&x[i]);

       }
        printf("Which number do you want to search?");
        scanf("%d",&key);
        printf("\nSearched number found on");
        pos=search(x,n,key);
        if(pos==-1000)
        {
            printf("not found");
        }
        else
            {
                printf("%d",pos);
            }

}
