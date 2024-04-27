/*Given a matrix 'a' of dimension nXm and 2 coordinates (l1,r1) and (l2,r2).
Return the sum of the rectangle from (l1,r1) to (l2,r2)*/
#include<iostream>
#include<vector>
using namespace std;
int Solve(vector<vector<int>> arr,int l1,int l2, int r1, int r2)
{
    int n = arr.size(), m = arr[0].size();
    // Convert the first row into prefix vector
    for (int j = 1; j < m; j++)
    {
        arr[0][j]+= arr[0][j-1];
    }
    // Convert the first column into prefix vector
    for (int i = 1; i < n; i++)
    {
        arr[i][0]+=arr[i-1][0];
    }
    // Convert the matrix into prefix matrix
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            arr[i][j]+= arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
        }
    }
    int full = arr[r2][l2];
    int top = (l1 >= 1 ? arr[l1-1][r1] : 0);
    int left = (r1 >= 1 ? arr[l2][r1-1] : 0);
    int double_subtracted = (l1 >= 1 && r1 >= 1 ? arr[l1-1][r1-1] : 0);
    int ans = full-top-left+double_subtracted;
    return ans;  
}
int main()
{
    int row, col, l1, l2, r1, r2;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    cout<<"Enter the number of cols:"<<endl;
    cin>>col;
    cout<<"Enter the edges for which you want the prefix sum(in order l1,l2,r1,r2)"<<endl;
    cin>>l1>>l2>>r1>>r2;
    vector<vector<int>>arr(row, vector<int>(col));
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Value is: "<<Solve(arr,l1,l2,r1,r2)<<endl;
    return 0;
}