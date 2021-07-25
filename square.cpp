#include <iostream>
using namespace std;
int main() {

    int area,peri,s;

    cout<<"\nEnter the side of square = ";
    cin>>s;

    area=s*s;
    peri=2*2*s;

    cout<<"\nArea = "<<area<<"\nPerimeter = "<<peri;
     return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ square.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe       

Enter the side of square = 10

Area = 100
Perimeter = 40
PS F:\PROFOUND\PRACTICAL\c++>
*/