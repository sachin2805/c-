#include <iostream>
using namespace std;

int main() {

    double area,c,r;

    cout<<"\nEnter the .. radius .. of the circle whose u want to find the area nd circumferance = ";
    cin>>r;

    area=3.14*r*r;
    c=2*3.14*r;

    cout<<"\nArea = "<<area<<"\nCircumfrence = "<<c;
     return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ circle.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe       

Enter the .. radius .. of the circle whose u want to find the area nd circumferance = 10

Area = 314
Circumfrence = 62.8
PS F:\PROFOUND\PRACTICAL\c++>
*/