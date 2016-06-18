#include<stdio.h>
float sum(float i,float j)
 {
   float a;
   a=i-j;
   return(a);

 }


main()
{
float i,j,a;
printf("Enter two numbers to sum up: ");
scanf("%f",&i);
scanf("%f",&j);
a=sum(i,j);
printf("Sum of entered numbers is: %f",a);


}
