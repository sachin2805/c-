#include<iostream>
using namespace std;
int main()
{
    int a[50] ,i,n,j,sum=0;
    cout<<"\n enter the number count in array = ";
    cin>>n;
    
    cout<<"\nEnter the numbers = \n";
    for(i=1;i<=n;i++)
    cin>>a[i];
for(i=1;i<=n;i++)
{
sum=sum+a[i];  
}
cout<<"\n The sum of all element/numbers of are is = "<<sum;

return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ sumofarray.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 enter the number count in array = 5

Enter the numbers =
10
20
30
40
50

 The sum of all element/numbers of are is = 150
PS F:\PROFOUND\PRACTICAL\c++>
*/