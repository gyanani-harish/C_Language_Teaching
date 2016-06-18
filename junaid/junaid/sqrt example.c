#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,s,r,area;
printf("enter side a");
scanf("%f",&a);
printf("enter side b");
scanf("%f",&b);
printf("enter side c");
scanf("%f",&c);
s=(a+b+c)/2;
r=s*(s-a)*(s-b)*(s-c);
area=sqrt(r);
printf("%f",area);
}
