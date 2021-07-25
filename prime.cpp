#include<iostream>
using namespace std;
int main()
{
    int a,i;
   cout<<"enter any one number = ";
    cin>>a;

    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
       cout<<"\ngiven number "<<a<<" is not prime number";
        break;
        }
    }
    if(i==a)
   cout<<"\ngiven number "<<a<<" is prime number";
   

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ prime.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe      
enter any one number = 11

given number 11 is prime number
PS F:\PROFOUND\PRACTICAL\c++>
*/