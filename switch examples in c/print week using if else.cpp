#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int week;
	cout<<"enter day";
	cin>>week;
	if(week==0)
	{
		cout<<"sunday";
	}
	else if(week==1)
	{
		cout<<"monday";
	}
	else if(week==2)
	{
		cout<<"tusday";
	}
	else if(week==3)
	{
		cout<<"wensday";
	}
	else if(week==4)
	{
		cout<<"thusday";
	}else if(week==5)
	{
		cout<<"friday";
	}
	else if(week==6)
	{
		cout<<"satuday";
	}
	else
	{
		cout<<"wrong input";
	}
	getch();
}


