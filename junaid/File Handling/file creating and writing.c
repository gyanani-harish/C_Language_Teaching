#include<stdio.h>
main()
{
int i;
 FILE *a;

 a=fopen("E:\\junaid\\File Handling\\temp files\\my name.txt","w");

 for(i=0;i<101;i++)
 {
 fprintf(a,"camel has a hump\n");
 }

 fclose(a);
}
