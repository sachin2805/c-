#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    cout<<"\nEnter the first matrix = \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cin>>a[i][j];
    }
      cout<<"\nEnter the Second matrix = \n";
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cin>>b[i][j];
    }

      cout<<"\n the first matrix =\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             cout<<" "<<a[i][j];
             cout<<"\n";

    }
      cout<<"\n the Second matrix =\n";
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             cout<<" "<<b[i][j];
             cout<<"\n";
    }
        cout<<"\n the Addition of the matrix =\n ";
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]= a[i][j] + b[i][j];
             cout<<" \t"<<c[i][j];
            
        }
         cout<<"\n";
    }
   
   return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ addmatrix.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the first matrix = 
1
2
3
4
5
6
7
8
9

Enter the Second matrix =
1
2
3
4
5
6
7
8
9

 the first matrix =
 1 2 3
 4 5 6
 7 8 9

 the Second matrix =
 1 2 3
 4 5 6
 7 8 9

 the Addition of the matrix =
        2       4       6
        8       10      12
        14      16      18
PS F:\PROFOUND\PRACTICAL\c++>
*/