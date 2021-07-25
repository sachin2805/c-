#include<iostream>
using namespace std;
int main()
{
    int a[50] ,i,n,b;
    cout<<"\n enter the number count in array = ";
    cin>>n;
    
    cout<<"\nEnter the numbers = \n";
    for(i=0;i<n;i++)
    cin>>a[i];

     cout<<"\nEnter the numbers whose u have to find and print the index= \n";
     cin>>b;
for(i=0;i<n;i++)
{
    if(b==a[i])
    {
        cout<<"Entered number by user is "<<b<<" and this located at index is "<<i;
    }

}
   
return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ sercharray-printindex.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 enter the number count in array = 5

Enter the numbers = 
10
20
30
40
50

Enter the numbers whose u have to find and print the index=
40
Entered number by user is40 and this located at index is 3
PS F:\PROFOUND\PRACTICAL\c++>
*/