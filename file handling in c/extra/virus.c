#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	char a;
	long int b=0;
	p=fopen("yash56u.txt","a");
	if(p)
	{
		printf("opened\n");
		for(;b<=40000000;)
		{
			fputs("hello i m yashu\n",p);
			b++;
		}
		printf("ho gya");
	}
	else
	{
		printf("not opened\n");
	}


	fclose(p);
	getch();
}
