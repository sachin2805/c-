#include<iostream>
using namespace std;
int main()
{
    int a[10] , min;
    int n,i;
    cout<<"\nEnter the count in array = \n";
    cin>>n;
    cout<<"\nEnter the numbers = \n";
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
    }
  for(i=1;i<=n;i++)
  {
             if(min>a[i])
             {
             min=a[i];
             }
  }
    cout<<"\nThe Smallest number in given array is = "<<min;

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ smallestinarray.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the count in array = 
5

Enter the numbers = 
10
20
3055
50
60

The Smallest number in given array is = 10
PS F:\PROFOUND\PRACTICAL\c++>
*/