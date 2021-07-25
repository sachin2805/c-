#include<iostream>
using namespace std;
int main()
{
       int a[50] ,n,i,b,f=0;
    cout<<"\n enter the number count in array = ";
    cin>>n;
    
    cout<<"\nEnter the numbers = \n";
    for(i=1;i<=n;i++)
    cin>>a[i];

    cout<<"\nEnter the any number which u have find presnet in array or not = ";
    cin>>b;

    for(i=0;i<=n;i++)
    {
        if(b==a[i])
        f++;
     }
     if(f>0)
     cout<<b<<" is prsent in the array";
     else
      cout<<b<<" is absent in the array";

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ nopresentarray.cpp 
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 enter the number count in array = 10

Enter the numbers = 
10
20
30
50
60
70
80
90
100

Enter the any number which u have find presnet in array or not = 40      
40 is prsent in the array
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 enter the number count in array = 5

Enter the numbers =
10
2030
30
40 
50

Enter the any number which u have find presnet in array or not = 55
55 is absent in the array
PS F:\PROFOUND\PRACTICAL\c++>
*/