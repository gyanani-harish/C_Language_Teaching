//*
//**
//***
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,line=1,star=1;
	printf("enter how many lines");
	scanf("%d",&n);
	do
	{
		star=1;
		do
		{
			printf(" yashu");
			star++;
		}while(star<=line);
		line++;
		printf("\n");
	}while(line<=n);
	getch();
}
