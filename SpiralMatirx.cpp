/*Given an nXm matrix 'a', return all elements of the 
matrix in spiral order */
#include<iostream>
#include<vector>
using namespace std;
void matrixOrder(vector<vector<int>> &matrix)
{
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
    int direction=0;
    while (left<=right && top<=bottom)
    {
        // left->right
        if (direction==0)
        {
            for (int col = left; col<=right; col++)
            {
                cout<<matrix[top][col]<<" ";
            }top++;           
        }
        // top-> bottom
        else if (direction==1)
        {
            for (int row = top; row <=bottom; row++)
            {
                cout<<matrix[row][right]<<" ";
            }right--;
        }
        else if (direction==2)
        {
            for (int col =right; col >=left; col--)
            {
                cout<<matrix[bottom][col]<<" ";
            }bottom--;   
        }
        // bottom-> top
        else
        {
            for (int row = bottom; row >=top; row--)
            {
                cout<<matrix[row][left]<<" ";
            }left++;
        }
        direction=(direction+1)%4;
        // 0,1,2,3 asssste
        
    }
    

}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int> (m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    matrixOrder(matrix);
    return 0;
}