#include<iostream>
using namespace std;
int main()
{
	float s,d,t;
	cout<<"\n enter the distance in km = ";
	cin>>d;
	cout<<"km\n";
	cout<<"\n enter the time in hour= ";
	cin>>t;
	cout<<"hr\n";
	s=d/t;
	
	cout<<" the speed of distance "<<d<<" km and time "<<t<<" hr is = "<<s<<"km/hr\n";
	return 0;
	
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ speed.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe      

 enter the distance in km = 60
km

 enter the time in hour= 1
hr
 the speed of distance 60 km and time 1 hr is = 60km/hr
PS F:\PROFOUND\PRACTICAL\c++>
*/