#include<iostream>
using namespace std;
int main()
{
	int s,c,n;
	
		cout<<"\nEnter your cost price = ";
	cin>>c;
	
	cout<<"u r the student \n if u r student then write 0 other wise 1 = ";
	cin>>s;
	if(c>=500 && s==0)
	{
		cout<<"u got the 10%% discount on the price of "<<c<<"\n";
		n=c/10;
		c=c-n;
		cout<<"\nAfter discount cost price = "<<c;
	}
	else if(c<=500 && s==0)
	{
		cout<<"u got the 5%% discount on the price of "<<c<<"\n";
			n=(c/100)*5;
		c=c-n;
		cout<<"\nAfter discount cost price = "<<c;
	}
	if(c>=500 && s!=0)
	{
		cout<<"u got the 8%% discount on the price of "<<c<<"\n";
			n=(c/100)*8;
		c=c-n;
		cout<<"\nAfter discount cost price = "<<c;
	}
		else if(c<=500 && s!=0)
	{
		cout<<"u got the 2%% discount on the price of "<<c<<"\n";
			n=(c/100)*2;
		c=c-n;
		cout<<"\nAfter discount cost price = "<<c;
		
	}
	return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ costprice.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter your cost price = 500
u r the student 
 if u r student then write 0 other wise 1 = 0
u got the 10%% discount on the price of 500

After discount cost price = 450
*/
