#include<iostream>
using namespace std;
int main()
{
    int a[50] ,i,n,j,b;
    cout<<"\n enter the number count in array = ";
    cin>>n;
    
    cout<<"\nEnter the numbers = \n";
    for(i=1;i<=n;i++)
    cin>>a[i];
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]<a[j])
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }

    }
}
   
   cout<<"\n the Array in decending order is :\n" ;
       for(i=1;i<=n;i++)
       cout<<"\t"<<a[i];
     return 0;
     
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ decendingarray.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 enter the number count in array = 10

Enter the numbers =
10
20
30
-40
55
66
-88
90
12
-55

 the Array in decending order is :
        90      66      55      30      20      12      10      -40     -55     -88
PS F:\PROFOUND\PRACTICAL\c++> 
*/