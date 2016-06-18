#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
int main()
{
	char n;
	p("enter charcter");
	s("%c",&n);
	switch(n)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		p("vowel");
		break;
		default:
			p("not vowel");
	}
	
	getch();
}


