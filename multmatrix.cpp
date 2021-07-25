#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
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
        
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=0;
          for(k=0;k<3;k++)
          {
            c[i][j]+= a[i][k]*b[k][j];
          }
         }
      }
              cout<<"\n the Multiplication of the matrix =\n";
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

             cout<<"   "<<c[i][j];
            
        }
         cout<<"\n";
    }
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ multmatrix.cpp
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

 the Multiplication of the matrix =
   30   36   42
   66   81   96
   102   126   150
PS F:\PROFOUND\PRACTICAL\c++> 
*/