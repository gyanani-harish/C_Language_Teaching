#include<iostream>
#include<conio.h>
using namespace std;
void yash(int n);
int main()
{
yash(1);
getch();
}
void yash(int n)
{
if(n<=10)
{
 cout<<n<<endl;
 yash(n+1);
}
}
