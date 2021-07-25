//PROGRAM 1

/*#include<iostream>
using namespace std;
int main()
    {
        int i,j,n;
        cout<<"\n Enter the number = ";
        cin>>n;
        for(i=n;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"  "<<j;
            }
            cout<<"\n";
        }
    return 0;
    }

/* OUTPUT 1
PS F:\PROFOUND\PRACTICAL\c++> g++ 5releatedprogram.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 Enter the number = 5
  1  2  3  4  5
  1  2  3  4
  1  2  3
  1  2
  1
PS F:\PROFOUND\PRACTICAL\c++>
*/


//PROGRAM 2

 /*#include<iostream>
 using namespace std;
int main()
    {
        int i,j,n;
        cout<<"\n Enter the number = ";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"  "<<j;
            }
            cout<<"\n";
        }
    return 0;
    }
/*OUTPUT 2
PS F:\PROFOUND\PRACTICAL\c++> g++ 5releatedprogram.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 Enter the number = 5
  1
  1  2
  1  2  3
  1  2  3  4
  1  2  3  4  5
PS F:\PROFOUND\PRACTICAL\c++>
*/


// PROGRAM 3


 /*#include<iostream>
 using namespace std;
int main()
    {
        int i,j;
        char n,a='A';
        cout<<"\n Enter the upper char  =  ";
        cin>>n;
      
         for(i=1;i<=(n-'A'+1);i++)
      
        {
            for(j=1;j<=i;j++)
            {
                cout<<"  "<< a;
            }
            ++a;
            cout<<"\n";
        }
    return 0;
    }

 /*OUTPUT 3
PS F:\PROFOUND\PRACTICAL\c++> g++ 5releatedprogram.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 Enter the upper char  =  E
  A
  B  B
  C  C  C
  D  D  D  D
  E  E  E  E  E
PS F:\PROFOUND\PRACTICAL\c++> 
  */

//PROGRAM 4

 /*#include<iostream>
using namespace std;
int main()
    {
        int i,j;
        char n,a='A',k;
        cout<<"\n Enter the upper char  =  ";
        cin>>n;
      
         for(i=1;i<=(n-'A'+1);i++)
        {
            for(j=1;j<=i;j++)
            {
                k=a+j-i;
                cout<<"  "<<k;
            }
            ++a;
            cout<<"\n";
        }
    return 0;
    }
/*OUTPUT 4
PS F:\PROFOUND\PRACTICAL\c++> g++ 5releatedprogram.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 Enter the upper char  =  E
  A
  A  B
  A  B  C
  A  B  C  D
  A  B  C  D  E
PS F:\PROFOUND\PRACTICAL\c++> 
  */

 //PROGRAM 5

#include<iostream>
using namespace std;
int main()
    {
        int i,j,n;
        cout<<"\n Enter the number = ";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"  "<<i;
            }
            cout<<"\n";
        }
    return 0;
    }

/*OUTPUT 5
PS F:\PROFOUND\PRACTICAL\c++> g++ 5releatedprogram.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

 Enter the number = 5
  1
  2  2
  3  3  3
  4  4  4  4
  5  5  5  5  5
PS F:\PROFOUND\PRACTICAL\c++>
*/