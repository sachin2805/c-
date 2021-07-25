#include<iostream>
using namespace std;
int main()
{
        int n,i;
      cout<<"\n enter the range = ";
    cin>>n;
    cout<<"\nNumbers = \n";
    for(i=1;i<=n;i++)
   {
      if(i==3)
       continue;
    cout<<"\t"<<i;
     }

     cout<<"\nReverce numbers = \n";
    for(i=n;i>=1;i--)
   {
     if(i==3)
       continue;
     cout<<"\t"<<i;
   }
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ jump.cpp      
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe     

 enter the range = 5

Numbers =
        1       2       4       5
Reverce numbers =
        5       4       2       1
PS F:\PROFOUND\PRACTICAL\c++> 
*/