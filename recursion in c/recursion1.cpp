#include<iostream>
#include<conio.h>
using namespace std;
void function1(int n);
int main()
{
    function1(10);
    getch();
}
void function1(int n)
{
    if(n>=1)
    {
         cout<<n<<endl;
         function1(n-1);
    }
}
