#include<iostream>
using namespace std;
int main()
{
    int a[10][10] , min;
    int i,j;
    cout<<"\nEnter the matrix 5*5 = \n";
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
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             if(min>a[i][j])
             {
             min=a[i][j];
             }
    }
    cout<<"\nThe Smallest number in given matrix is = "<<min;

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ minimum5-5.cpp     
PS F:\PROFOUND\PRACTICAL\c++> ./a.exe

Enter the matrix 5*5 = 
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
25
23
24

Given matrix is
        1       2       3       4       5
        6       7       8       9       10
        11      12      13      14      15
        16      17      18      19      20
        21      22      25      23      24

The Smallest number in given matrix is = 1
PS F:\PROFOUND\PRACTICAL\c++> 
*/