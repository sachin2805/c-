#include<iostream>
using namespace std;
int main()
{
    int a[10][10] , max=0;
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
             if(max<a[i][j])
             {
             max=a[i][j];
             }
    }
    cout<<"\nThe largest number in given matrix is = "<<max;

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c++> g++ largeno5-5.cpp
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
20
50
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
15
16

Given matrix is
        1       2       3       4       5
        6       7       8       9       10
        20      50      3       4       5
        6       7       8       9       10
        11      12      13      15      16

The largest number in given matrix is = 50
PS F:\PROFOUND\PRACTICAL\c++>
*/