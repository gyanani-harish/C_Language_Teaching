#include<stdio.h>
#include<conio.h>
int main()
{
	//when folder is created it returns false,otherwise true
	int a=system("mkdir d:\\vikas\\harigfgsdsfh");
	if(a)
	{
		printf("folder not created");
	}
	else
	{
        printf("folder created");
	}
	getch();
}
	
