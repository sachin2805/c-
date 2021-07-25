#include<iostream>
using namespace std;
int main()
{
    int a,i,sum=0;
    cout<<"enter number upto where u want to do the sum  (Enter the range)= ";
    cin>>a;

   
    for(i=1;i<=a;i++)
    {
        
        cout<<2*i<<" + ";
     
        sum=sum + 2*i;

    }
    cout<<"\nthe sum is = "<<sum;
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ 2+4+6+.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe       
enter number upto where u want to do the sum  (Enter the range)= 4
2 + 4 + 6 + 8 + 
the sum is = 20
PS F:\PROFOUND\PRACTICAL\c++>
*/