#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the age of candidate = ";
	cin>>a;
	
	if(a>17)
	cout<<"candidate is eligibale for voating\n\n";
	else 
		cout<<"candidate is not eligibale for voating\n\n";

	return 0;
	
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ voting.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe       
enter the age of candidate = 18
candidate is eligibale for voating

PS F:\PROFOUND\PRACTICAL\c++> ./a.exe
enter the age of candidate = 17
candidate is not eligibale for voating

PS F:\PROFOUND\PRACTICAL\c++>
*/