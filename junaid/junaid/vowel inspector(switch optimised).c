#include<stdio.h>
main()
{
    char t,tt;
    printf("Enter a character to check vowel");
    scanf("%c",&t);
    tt=tolower(t);
    switch(tt)
    {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u': printf("It's a vowel.");
     break;

     default : printf("It'snot a vowel");
    }
}
