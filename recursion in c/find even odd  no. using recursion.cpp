#include<iostream>
#include<conio.h>
using namespace std;
void yash1(int n);
int main()
{
    yash1(5);
    getch();
}
void yash1(int n)
{
        int even,odd;
        if(n/2==0)
        {
        cout<<even<<endl;
        }
        else
        {
        cout<<odd<<endl;
        }
        yash1(int n);
}
