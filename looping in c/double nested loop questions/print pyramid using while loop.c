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
	while(line<=n)
	{
		star=1;
		while(star<=line)
		{
			printf("*");
			star++;
		}
		printf("\n");
		line++;
	}
	getch();
}
