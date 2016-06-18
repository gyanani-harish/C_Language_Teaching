#include<iostream>
#include<conio.h>
using namespace std;
void yash(int n);
int main()
{
    yash(4);
    getch();
}
void yash(int n)
{
    int fact=1;
    if(n<=1)
    {
        fact=fact*yash(n-1);
    }
    return fact;
}
