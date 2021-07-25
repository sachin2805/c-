#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nEnter the percentage of the student = ";
    cin>>a;

    if(a>=70)
    {
    cout<<"Student got the 'A' gread";
    }
    else if(a>=60 && a<70)
    {
    cout<<"Student got the 'B' gread";
    }
    else if(a>=45 && a<60)
    {
    cout<<"Student got the 'c' gread";
    }
 else 
    {
    cout<<"Student is FAIL";
    }
    return 0;

}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ gread.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe      

Enter the percentage of the student = 90
Student got the 'A' gread
PS F:\PROFOUND\PRACTICAL\c++>
*/