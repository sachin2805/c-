#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
   cout<<"\n Enter the number of rows = ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
            for(j=1;j<=n-i;j++)
            {
               cout<<" ";
            }
                for(k=1;k<=(2*i-1);k++)
                {
               cout<<"*";
                }
            
           cout<<"\n";
    }
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ star.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe     

 Enter the number of rows = 3
  *
 ***
*****
PS F:\PROFOUND\PRACTICAL\c++>
*/