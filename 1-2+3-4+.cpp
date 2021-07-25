#include<iostream>
using namespace std;
int main()
{
    int c,i,sum=0,sum1=0,sum2=0;
    cout<<"enter number upto where u want to do the sum  (Enter the range)= ";
    cin>>c;

    for(i=1;i<=c;i++)
    {
        if(i%2==0)
        {
        cout<<i<<" + ";
        sum1=sum1 + i;
        }
        else{
            cout<<"  "<<i; 
            cout<<" - ";
        sum2=sum2 + i;
          
        }
        sum=sum2-sum1;
     }
    cout<<"the sum is = "<<sum;
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ 1-2+3-4+.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe
enter number upto where u want to do the sum  (Enter the range)= 6
  1 - 2 +   3 - 4 +   5 - 6 + the sum is = -3
PS F:\PROFOUND\PRACTICAL\c++>
*/