#include<iostream>
using namespace std;
int main()
{
    int p,r,t,SI;
   cout<<"enter the principle = ";
  cin>>p;
     cout<<"enter the rate of intrest = ";
  cin>>r;
     cout<<"enter the time period = ";
  cin>>t;

    SI=(p*r*t)/100;
    cout<<"The simple intrest of given data is = "<<SI;

     return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ simpleintrest.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe
enter the principle = 5000
enter the rate of intrest = 50
enter the time period = 12
The simple intrest of given data is = 30000
PS F:\PROFOUND\PRACTICAL\c++>
*/