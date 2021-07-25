#include<iostream>
using namespace std;
int main()
{
    float a,b,x;
    int c;
    cout<<"\nEnter any two number = ";
    cin>>a>>b;
    cout<<"\n-------Menu------\n";
    cout<<"\n1.Addition \n2.Substrction \n3.Division \n4.Multiplication";
    cout<<"\nEnter the choice = ";
    cin>>c;

    switch (c)
    {
        case 1: x=a+b;
        cout<<"the addition of given "<<a<<" and "<<b<<" is "<<x;
        break;
        case 2: x=a-b;
     cout<<"the substraction of given "<<a<<" and "<<b<<" is "<<x;
        break;
        case 3: x=a/b;
     cout<<"the dividation of given "<<a<<" and "<<b<<" is "<<x;
        break;
        case 4: x=a*b;
     cout<<"the multiplication of given "<<a<<" and "<<b<<" is "<<x;
        break;
        default :
        cout<<"\n Entered choice is wrong ";
    }
   
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ calculator1.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter any two number = 20
10

-------Menu------

1.Addition
2.Substrction
3.Division
4.Multiplication
Enter the choice = 3
the dividation of given 20 and 10 is 2
PS F:\PROFOUND\PRACTICAL\c++>
*/