#include<iostream>
using namespace std;
int main()
{
    int c,s,a,b;
    cout<<"\n____________menue____________\n";
    cout<<"\n 1. Find the square and cube of given number ";
    cout<<"\n 2. Find given year is leap year or not ";
    cout<<"\n\nEnter the choice = ";
    cin>>c;

    if(c==1) //logic for square nd cube
    {
        cout<<"\nEnter the any number = ";
        cin>>s;
                  a=s*s;
                b=a*s;
             cout<<"\nthe square of the given"<<s<<" number is = "<<a<<" and cube is = "<<b; 
    }
    else if(c==2) //logic for leap year
    {
        cout<<"\nEnter the any year = ";
        cin>>s;
        if(s%4==0)
        {
            cout<<"\n Givn year "<<s<<" is leap year ";
        }
        else 
        {
           cout<<"\n Givn year "<<s<<" is not leap year ";    
        }
    }
    else
    cout<<"\n User enter wrong choice.";
    return 0;
    
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ scl.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe    


 1. Find the square and cube of given number
 2. Find given year is leap year or not

Enter the choice = 1

Enter the any number = 10

the square of the given10 number is = 100 and cube is = 1000
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe    

____________menue____________

 1. Find the square and cube of given number
 2. Find given year is leap year or not

Enter the choice = 2

Enter the any year = 2012

 Givn year 2012 is leap year
PS F:\PROFOUND\PRACTICAL\c++>
*/