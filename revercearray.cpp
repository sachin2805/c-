#include<iostream>
using namespace std;
int main()
{
    int a[30],n,i,j;
     cout<<"\n enter the number count in array = ";
    cin>>n;
    
   cout<<"\nEnter the numbers = \n";
    for(i=1;i<=n;i++)
    cin>>a[i];

   cout<<"\nu enter the numbers are = \n";
    for(i=1;i<=n;i++)
   cout<<"\t"<<a[i];

    cout<<"\nReverce numbers of the given array are = \n";
    for(i=n;i>=1;i--)
   cout<<"\t"<<a[i];

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ revercearray.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 enter the number count in array = 10

Enter the numbers =
10
20
30
40
50
60
70
80
90
100

u enter the numbers are =
        10      20      30      40      50      60      70      80      90      100
Reverce numbers of the given array are =
        100     90      80      70      60      50      40      30      20      10
PS F:\PROFOUND\PRACTICAL\c++>
*/