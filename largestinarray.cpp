#include<iostream>
using namespace std;
int main()
{
    int a[10] , max=0;
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
             if(max<a[i])
             {
             max=a[i];
             }
  }
    cout<<"\nThe Smallest number in given array is = "<<max;

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ largestinarray.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the count in array = 
5

Enter the numbers =
10
305
20
60
40

The Smallest number in given array is = 305
PS F:\PROFOUND\PRACTICAL\c++>
*/