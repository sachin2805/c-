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
     
               for(i=1;i<=3;i++)
    {
        sumr=0;
        for(j=1;j<=3;j++)
        {
           sumr= sumr + a[i][j];  
        }
         cout<<"\n the Sum row "<<i<<" elements are = "<<sumr;
    }
              for(i=1;i<=3;i++)
    {
        sumc=0;
        for(j=1;j<=3;j++)
        {
            
            sumc= sumc + a[j][i];
        }
        cout<<"\n the Sum column "<<i<<" elements are = "<<sumc;
    }
    
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ sumrsumc.cpp
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

 the Sum row 1 elements are = 6
 the Sum row 2 elements are = 15
 the Sum row 3 elements are = 24
 the Sum column 1 elements are = 12
 the Sum column 2 elements are = 15
 the Sum column 3 elements are = 18
PS F:\PROFOUND\PRACTICAL\c++>
*/