// Write a program to transpose a matrix
#include<iostream>
using namespace std;
int main()
{
     int m, n;
    cin>>m>>n;
    int A[m][n];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>A[i][j];
        }  
    }
    int transpose[n][m];
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j]=A[j][i];
        }  
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
        
    }
    return 0;
}