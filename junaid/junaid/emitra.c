#include<stdio.h>
main()
{
 int ch,units,iunits,fch,fich,ch2,srch;
 printf("Enter consumed electricity units");
 scanf("%d",&units);
 if(units<=200)
  {
   ch=(0.8*units)+(100);
   printf("Amount payable=%d",ch);
  }
 else if(units>200 && units <=300)
  {
   ch=0.8*200;
   iunits=units-200;
   fch=(ch)+(0.9*iunits)+(100);
   printf("Amount payable=%d",fch);
  }
 else if(units>300)
  {
   ch=0.8*200;
   ch2=0.9*100;
   iunits=units-300;
   fch=(ch)+(ch2)+(1*iunits)+(100);
   if(fch>400)
    {
     srch=fch*15/100;
     fich=fch+srch+100;
     printf("Amount payable=%d",fich);
    }
   else
   {
       printf("Amount payable=%d",fch);
   }


  }

}
