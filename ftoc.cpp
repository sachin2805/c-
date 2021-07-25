#include<iostream>
using namespace std;
int main()
{
	float f,c;
	cout<<"enter Fahrenheit temperature = ";
	cin>>f;
	cout<<"F";
	
	c=(f-32)*5/9;
	
	cout<<"degrre celcious temperature is = "<<c;
	
	return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ ftoc.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe     
enter Fahrenheit temperature = 97
Fdegrre celcious temperature is = 36.1111
PS F:\PROFOUND\PRACTICAL\c++>
*/