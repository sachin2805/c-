#include <iostream>
using namespace std;

int main()
{
   int i,n,sum=0;
   cout<<"\nEnter the range = ";
   cin>>n;
   
   for(i=1;i<=n;i++)
   {
    cout<<i*i<<" + ";
    
    sum=sum+i*i;
   }
   cout<<"\nsum = "<<sum;
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ 1+4+9+16+.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the range = 5
1 + 4 + 9 + 16 + 25 + 
sum = 55
PS F:\PROFOUND\PRACTICAL\c++>
*/