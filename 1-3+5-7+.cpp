#include<iostream>
using namespace std;
int main() 
{
   int i,n,sum=0,c;
   cout<<"\nEnter the range = ";
  cin>>n;
   
   for(i=1;i<=n;i++)
   {
        c=2*i-1;
       if(i%2==0)
       {
    cout<<-c<<"+";
    sum=sum+(-c);
       }
       else{
           cout<<c;
           sum=sum+c;
       }
    
   }
    
    
    cout<<"\nsum of series = "<<sum;
    
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ 1-3+5-7+.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the range = 6
1-3+5-7+9-11+
sum of series = -6
PS F:\PROFOUND\PRACTICAL\c++> 
*/