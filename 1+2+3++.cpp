#include<iostream>
using namespace std;
int main()
{
    int a,i,sum=0;
    cout<<"enter number upto where u want to do the sum  (Enter the range)= ";
    cin>>a;

    for(i=1;i<=a;i++)
    {
        cout<<i<<" + ";
        sum=sum + i;
    }
    cout<<"the sum is = "<<sum;
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ 1+2+3++.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe
enter number upto where u want to do the sum  (Enter the range)= 5
1 + 2 + 3 + 4 + 5 + the sum is = 15
PS F:\PROFOUND\PRACTICAL\c++>      
*/