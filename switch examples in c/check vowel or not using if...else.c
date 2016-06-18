#include<stdio.h>
#include<conio.h>
int main()
{
	char n;
	printf("enter charcter");
	scnaf("%c",&n);
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
	{
		printf("vowels");
	}
	else
	{
		printf("not vowels");
	}
	getch();
}


