#include<iostream>
using namespace std;
int main()
{
       int a[50] ,n,i;
    cout<<"\n\nEnter the number count in array = ";
    cin>>n;
    
    cout<<"\n\nEnter the numbers = \n";
    for(i=1;i<=n;i++)
    cin>>a[i];

     cout<<"\n\nPositive numbers in the array are =";
    for(i=1;i<=n;i++)
    { if(a[i]>0)
         cout<<"\t"<<a[i];
    }
    cout<<"\n\nNegative numbers in the array are =";
     for(i=1;i<=n;i++)
    { 
     if(a[i]<0)        
           cout<<"\t"<<a[i];  
     }
     cout<<"\n\nZero or neutral in array =";
     for(i=1;i<=n;i++)
     {
     	if(a[i]==0)
	    cout<<"\t"<<a[i];
	}
     cout<<"\n\nEven number in array are =";
     for(i=1;i<=n;i++)
    {
	    if(a[i]%2==0)
	    cout<<"\t"<<a[i];
	}
    cout<<"\n\nOdd number in array are =";
      for(i=1;i<=n;i++)
    {
	   if(a[i]%2!=0)
	    cout<<"\t"<<a[i];
     }
   return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ +-evenoddarray.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe


Enter the number count in array = 10


Enter the numbers =
-10
-20
-30
40
50
90   
-58
-89
94
90


Positive numbers in the array are =     40      50      90      94      90

Negative numbers in the array are =     -10     -20     -30     -58     -89

Zero or neutral in array =

Even number in array are =      -10     -20     -30     40      50      90      -58     94      90

Odd number in array are =       -89
PS F:\PROFOUND\PRACTICAL\c++> 
*/