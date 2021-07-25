#include<iostream>
using namespace std;
int main()
{
    int a,n,sum=0;
    cout<<"\nEnter the number = ";
    cin>>a;//store the number

while(n>0) //loop upto n is positive
{
    n=a%10;  //first take a%10 in n 
    a=a/10;  //and a/10 means one by one a is shifted (like eg. a=1234 then 123 then 12 then 1) and compare its all digits from last 
     if(n%2==0) //if stored value in n is even 
	{
	sum=sum+n; //then add otherwise leave this digit by using if condition
	}
}
 cout<<"\nThe sum of even digits entered by user is = "<<sum;

 return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ sumofevendegit.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the number = 1325496

The sum of even digits entered by user is = 12
PS F:\PROFOUND\PRACTICAL\c++>
*/