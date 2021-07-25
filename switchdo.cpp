#include<iostream>
using namespace std;
int main()
{
    float a,b,x;
    int c,i;
 

    do
    {
    cout<<"\nEnter any two number = ";
    cin>>a>>b;
    cout<<"\n-------Menu------\n";
    cout<<"\n1.Addition \n2.Substrction \n3.Division \n4.Multiplication \n5.Exit\n";
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
         cout<<"the division of given "<<a<<" and "<<b<<" is "<<x;
        break;
        case 4: x=a*b;
         cout<<"the multiplication of given "<<a<<" and "<<b<<" is "<<x;
        break;
        default: 
         cout<<"Exit the programm";
        
    }
    }while(c<5);
   
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ switchdo.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter any two number = 10
20

-------Menu------

1.Addition
2.Substrction
3.Division
4.Multiplication
5.Exit

Enter the choice = 1
the addition of given 10 and 20 is 30
Enter any two number = 10
20

-------Menu------

1.Addition
2.Substrction
3.Division
4.Multiplication
5.Exit

Enter the choice = 2
the substraction of given 10 and 20 is -10
Enter any two number = 10
20

-------Menu------

1.Addition
2.Substrction
3.Division
4.Multiplication
5.Exit

Enter the choice = 3
the division of given 10 and 20 is 0.5
Enter any two number = 10
20

-------Menu------

1.Addition
2.Substrction
3.Division
4.Multiplication
5.Exit

Enter the choice = 4
the multiplication of given 10 and 20 is 200
Enter any two number = 5
5

-------Menu------

1.Addition
2.Substrction
3.Division
4.Multiplication
5.Exit

Enter the choice = 5
Exit the programm
PS F:\PROFOUND\PRACTICAL\c++>
*/