#include<iostream>
using namespace std;
int main()
{
    int a[50] ,i,n,j,count=0;
    cout<<"\n enter the number count in array = ";
   cin>>n;
    
    cout<<"\nEnter the numbers = \n";
    for(i=1;i<=n;i++)
   cin>>a[i];
    cout<<"duplicate elements are = ";
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]==a[j])
        {
            cout<<"\t"<<a[j];
          count++;
          break;
        }
    }
}   cout<<"\nduplicate numbers count is = "<<count;

return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ duplicate.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 enter the number count in array = 5

Enter the numbers = 
10
10
20
20
30
duplicate elements are =        10      20
duplicate numbers count is = 2
PS F:\PROFOUND\PRACTICAL\c++>
*/