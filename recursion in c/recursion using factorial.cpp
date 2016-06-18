#include<iostream>
#include<conio.h>
using namespace std;
typedef int yashu;
int yash(int n);
int main()
{
yashu a=yash(10);
cout<<a;
getch();
}
int yash(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
          return n+yash(n-1);
    }
}
