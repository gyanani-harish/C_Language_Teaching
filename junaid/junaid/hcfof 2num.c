#include <stdio.h>
main ()
{
    int i,x=12,y=24    ,prod=1;
    for (i=2;x!=1 || y!=1; i++)
    {
        int t=0;
        if (x%i==0 && y%i==0)
        {
            prod=prod*i;
        }
         if (x%i==0 || y%i==0)
        {
            t=1;
        }
        if (x%i==0)
        {
            x=x/i;
        }
        if (y%i==0)
        {
            y=y/i;
        }
        if(t==1)
        {
        i--;
        }
    }
 printf("%d",prod);

}
