#include<iostream>
using namespace std;
int main()
{
    int a[10][10],sumr=0,sumc=0;
    int i,j;
    cout<<"\nEnter the 3*3 matrix = \n";
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
             cin>>a[i][j];
    }


      cout<<"\n the matrix =\n";
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
             cout<<"\t"<<a[i][j];

             cout<<"\n";
     
    }

    
      cout<<"\n Uppertriangular matrix of Given matrix is =\n";
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
        if(i>j)
        {
             cout<<"\t0";
        }
        else
        {
             cout<<"\t"<<a[i][j];
        }
        }
          cout<<"\n";
    }

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ uppertriangular.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the 3*3 matrix = 
1
2
3
4
5
6
7
8
9

 the matrix =
        1       2       3
        4       5       6
        7       8       9

 Uppertriangular matrix of Given matrix is =
        1       2       3
        0       5       6
        0       0       9
PS F:\PROFOUND\PRACTICAL\c++> 
*/