#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"\n Enter the three number = ";
    cin>>n1>>n2>>n3;

    if(n1==n2 && n2==n3)
            {
                  cout<<"\n"<<n1<<","<<n2<<","<<n3<<" are equal and "<<n3<<" is largest number ";
            }
    else if(n1>n2 && n1>n3)
            {
                  cout<<"\n"<<n1<<","<<n2<<","<<n3<<" are not equal and "<<n1<<" is largest number ";
            }
    else if(n2>n3)
          {
                  cout<<"\n"<<n1<<","<<n2<<","<<n3<<" are not equal and "<<n2<<" is largest number ";
            }
            else 
            {
                  cout<<"\n"<<n1<<","<<n2<<","<<n3<<" are not equal and "<<n3<<" is largest number ";
            }
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ largest3.cpp 
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 Enter the three number = 10
10
20

10,10,20 are not equal and 20 is largest number 
PS F:\PROFOUND\PRACTICAL\c++> g++ largest3.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 Enter the three number = 10
10
10

10,10,10 are equal and 10 is largest number
PS F:\PROFOUND\PRACTICAL\c++>
*/