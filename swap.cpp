#include<iostream>
using namespace std;
int main() {
    
    int a,b,t;
    
   cout<<"\nEnter any two values = \t ";
    scanf("%d%d",&a,&b);
    
    cout<<"\nBefore swapping a = "<<a<<"\tb = "<<b;   
   t=a;
   a=b;
   b=t;
   
    
   cout<<"\nAfter swapping a = "<<a<<"\tb = "<<b;      
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ swap.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe     

Enter any two values =   10
20

Before swapping a = 10  b = 20
After swapping a = 20   b = 10
PS F:\PROFOUND\PRACTICAL\c++>
*/