#include<iostream>
using namespace std;
int main()
{
	double n1,n2,n3,n4,n5,avg;
	cout<<"Enter any five number = ";
	cin>>n1>>n2>>n3>>n4>>n5;
	
	avg=(n1+n2+n3+n4+n5)/5;
	cout<<"\n avg of given number is = "<<avg;
	
	return 0;

}	
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ savg.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe     
Enter any five number = 
10.50
20.50
30.50
40.50
50.50

 avg of given number is = 30.5
PS F:\PROFOUND\PRACTICAL\c++>
*/
	