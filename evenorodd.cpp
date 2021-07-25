#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the any number = ";
	cin>>a;
	
	if(a==0)
	{
	cout<<"\ngiven number "<<a<<" is zero or neutral\n ";
	}
	else if(a%2==0)
	{
	cout<<"\ngiven number "<<a<<" is Even number\n ";
	}
	else
	{
	cout<<"\ngiven number "<<a<<" is Odd number\n ";
	}
	return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ evenorodd.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe
enter the any number = 0

given number 0 is zero or neutral

PS F:\PROFOUND\PRACTICAL\c++> g++ evenorodd.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe
enter the any number = 20

given number 20 is Even number

PS F:\PROFOUND\PRACTICAL\c++>
*/
