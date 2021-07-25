#include<iostream>
using namespace std;
int main()
{
    int a[3][3],sum=0;
    int i,j;
   cout<<"\nEnter the 3*3 matrix = \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             cin>>a[i][j];
    }


     cout<<"\n the matrix =\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<"\t"<<a[i][j];

            cout<<"\n";
     
    }
     
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            sum= sum + a[i][j];
          
        }
    }
    cout<<"\n the Sum of all digonal elements are = "<<sum;
   
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ sumofdigonal.cpp
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

 the Sum of all digonal elements are = 15
PS F:\PROFOUND\PRACTICAL\c++>
*/