#include<iostream>
using namespace std;
int main()
{
    int f=1,n,i;
     cout<<"\n-------Find factorial------\n";
    cout<<"\nEnter the number = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"\nThe factorial of given "<<n<<" number is = "<<f;

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ factorial.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

-------Find factorial------

Enter the number = 3

The factorial of given 3 number is = 6
PS F:\PROFOUND\PRACTICAL\c++>
*/