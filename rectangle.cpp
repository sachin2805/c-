#include <iostream>
using namespace std;

int main() {

    int area,peri,l,w;

    cout<<"\nEnter the length and width of rectangle = ";
    cin>>l>>w;

    area=l*w;
    peri=2*l*w;

    cout<<"\nArea = "<<area<<"\nPerimeter = "<<peri;


    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ rectangle.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the length and width of rectangle = 10
20

Area = 200
Perimeter = 400
PS F:\PROFOUND\PRACTICAL\c++> 
*/