#include<stdio.h>
main()
{
FILE *x,*y,*z;
int numbers;
x=fopen("E:\\junaid\\File Handling\\files\\xyz.txt","r");
y=fopen("EVEN.txt","w");
z=fopen("ODD.txt","w");
while(!feof(x))
 {
     fscanf(x,"%d",&numbers);
  if(numbers%2==0)
  {

    fprintf(y,"%d ",numbers);
  }
  else
 {

    fprintf(z,"%d ",numbers);
 }

 }
 fclose(x);
 fclose(y);
 fclose(z);
}
