/* Check if we can partition the array into two subarrays with equal sum.
More formally, check that the prefix sum of a part of the array is equal to the
suffix sum of rest of the array.*/
#include<iostream>
#include<vector>
using namespace std;
bool checkPrefixSum(vector<int> &v)
{
   int prefix_sum=0;
   int total_sum=0;
   for (int i = 0; i < v.size(); i++)
   {
    total_sum+=v[i];
   }
   
   for (int i = 0; i < v.size(); i++)
   {
    prefix_sum+=v[i];
    int sufix_sum=total_sum-prefix_sum;
    if (sufix_sum==prefix_sum)
    {
        return true;
    }
   }
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
            int ele;cin>>ele;
            v.push_back(ele);
    }
    cout<<checkPrefixSum(v)<<endl;
    return 0;
}