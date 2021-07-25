#include<iostream>
using namespace std;
int main()
{
    //but pointer use the mostly int and char
    int a; char c; double d;
    int* p; char* r; double* s;
    int** e;
    a=10; c=20; d=30;
    p=&a;  r=&c;s=&d;
    e=&p;
    //printng values of given variable
     cout<<"\nThe Value of  a = "<<a;
       cout<<"\nThe Value of  c = "<<c;
        cout<<"\nThe Value of  d = "<<d;
    //printing address of given variable
    cout<<"\nThe address of a = "<<&a;
    cout<<"\nThe address of c = "<<&c;
    cout<<"\nThe address of d = "<<&d;
    //printing the pointing variable and print the values at the variable
    cout<<"\n\nThe Value of  p = "<<p; //store value at address  of a or its point to a
       cout<<"\nThe Value of  &p = "<<&p; 
        cout<<"\nThe Value of  *p = "<<*p; //store value at a or its point to a
        cout<<"\nThe Value of  *r = "<<*r; //store value at d or its point the d
         cout<<"\nThe Value of  *s = "<<*s; //store value at d or its point the d
         cout<<"\nThe Value of  **e = "<<**e; // store value at a and store address of p

    return 0;
}
/*OUTPUT
S F:\PROFOUND\PRACTICAL\c++> g++ pointer.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

The Value of  a = 10       
The Value of  c = ¶        
The Value of  d = 30       
The address of a = 0x61feb0
The address of c = ¶       

The address of d = 0x61fea0

The Value of  p = 0x61feb0
The Value of  &p = 0x61fe9c
The Value of  *p = 10
The Value of  *r = ¶
The Value of  *s = 30
The Value of  **e = 10
PS F:\PROFOUND\PRACTICAL\c++>
*/