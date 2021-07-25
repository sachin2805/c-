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
        if(a[i]>a[j])
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }

    }
}
   
   cout<<"\n the Array in acending order is :\n" ;
       for(i=1;i<=n;i++)
       cout<<"\t"<<a[i];
     return 0;
     
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ acendingarray.cpp                                
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 enter the number count in array = 10

Enter the numbers = 
99
88
-75
45
61
25
38
10
20
30

 the Array in acending order is :
        -75     10      20      25      30      38      45      61      88      99
PS F:\PROFOUND\PRACTICAL\c++>
*/