#include<stdio.h>
main()
{
int m,s,m2,s2;
printf("enter sec.");
scanf("%d",&s);

m=s/60;
m2=s%60;

printf("%d minutes %d seconds",m,m2);
}
