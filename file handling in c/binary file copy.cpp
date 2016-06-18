#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int main()
{
	
	FILE *p,*q;
	int val;
	unsigned char byte;
	p=fopen("Presentation12.pptx","rb");
	q=fopen("Presentation124.pptx","wb");
	if(p==NULL || q==NULL)
	{
		printf("nhi");
	}
	else
	{
		printf("coping....");
		while(1) 
		{ 
        	val = fgetc(p);
            if (val == EOF)
        	{
				    break; 
			} 
            byte = (unsigned char) val; 
        	fputc(byte,q);
    }
}
	fclose(p);
	fclose(q);
	printf("copied");
	getch();
}
