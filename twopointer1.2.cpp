// Sort an array consisting of only zeros and one
#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOnes(vector<int> &v)
{
   int left_ptr=0;
   int right_ptr= v.size()-1;
   while (left_ptr<right_ptr)
   {
    if (v[left_ptr]==1 && v[right_ptr]==0)
    {
        v[left_ptr]=0;
        v[right_ptr]=1;
        left_ptr++; right_ptr--;
    }
    if (left_ptr==0)
    {
        left_ptr++;
    }
     if (right_ptr==1)
    {
        right_ptr--;
    }
   }
    return ;
}
    int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele; 
        cin>>ele;
        v.push_back(ele);
    }
    sortZeroAndOnes(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;
    return 0;
}