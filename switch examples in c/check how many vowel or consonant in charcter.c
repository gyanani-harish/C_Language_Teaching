#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef char ch;
int main()
{
	ch a[10];
	int i,consonant=0,vowel=0;
	printf("enter a string");
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		switch(a[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			vowel++;break;
			default:
				consonant++;
		}
	}
	printf("this string\n ");
	printf("%d vowels",vowel);
	printf("\n%d consonant",consonant);
	getch();
}






