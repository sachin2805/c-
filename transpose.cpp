#include<iostream>
using namespace std;
int main()
{
    int a[10][10] , max=0;
    int i,j;
    cout<<"\nEnter the matrix = \n";
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             cin>>a[i][j];
    }
    cout<<"\nGiven matrix is \n";
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             cout<<"\t"<<a[i][j];
             cout<<"\n";
    }
      cout<<"\nTranspose of matrix is \n";
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             cout<<"\t"<<a[j][i];
             cout<<"\n";
    }
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ transpose.cpp
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the matrix = 
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25

Given matrix is
        1       2       3       4       5
        6       7       8       9       10
        11      12      13      14      15
        16      17      18      19      20
        21      22      23      24      25

Transpose of matrix is
        1       6       11      16      21
        2       7       12      17      22
        3       8       13      18      23
        4       9       14      19      24
        5       10      15      20      25
PS F:\PROFOUND\PRACTICAL\c++>
*/