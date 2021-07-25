#include<iostream>
using namespace std;
int main()
{
	float n1,n2,add,sub,mult,div;
	cout<<"enter the any two no. = ";
	cin>>n1>>n2;
	
	add=n1+n2;
	sub=n1-n2;
	mult=n1*n2;
	div=n1/n2;
	
	cout<<"\naddition is = "<<add;
		cout<<"\nsubstraction is = "<<sub;
			cout<<"\nmultiplication is = "<<mult;
				cout<<"\ndivision is = "<<div;
				
				return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ calculator.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe
enter the any two no. = 10
20

addition is = 30
substraction is = -10
multiplication is = 200
division is = 0.5
PS F:\PROFOUND\PRACTICAL\c++>
*/