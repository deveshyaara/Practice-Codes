/*Given a square matrix, turn it by 90 degrees in a clockwise 
direction without using any extra space*/
#include<iostream>
#include<vector>
#include "../../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
using namespace std;
void rotateArray(vector<vector<int>> &vec)
{
    // Transpose
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(vec[i][j], vec[j][i]);
        }   
    }
    // Reverse every row
    for (int i = 0; i < vec.size(); i++)
    {
        reverse(vec[i].begin(),vec[i].end());
    }
    return ;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> vec(n, vector<int> (n));
    rotateArray(vec);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<vec[i][j]<<" ";
        }cout<<endl;
        
    }
    
    return 0;
}