#include<iostream>
using namespace std;
int main()
{
    int a[10] ,i,j,sum=0,avg;
     cout<<"\nEnter the marks of 10 student = \n";
    for(i=1;i<=10;i++)
    cin>>a[i];
    for(j=1;j<=10;j++)
    {
        sum=sum+a[j];
    }
    avg = sum/10;
    cout<<"\n the average of 10 student is = "<<a[i];
    return 0;

}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ avgarray.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the marks of 10 student = 
10
20
30
40
50
60
70
80
90
100

 the average of 10 student is = 550
PS F:\PROFOUND\PRACTICAL\c++>
*/