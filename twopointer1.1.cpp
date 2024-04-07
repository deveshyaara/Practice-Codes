// Sort an array consisting of only zeros and one
#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOnes(vector<int> &v)
{
    int count_Zeros=0;
    for(int ele:v){
        if (ele==0)
        {
                count_Zeros++;
        } 
    }
    for (int i = 0; i <v.size(); i++)
    {
            if (i<count_Zeros)
            {
                v[i]=0;
            }
            else
            {
                v[i]=1;
            }       
    }
    }
    int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele; cin>>ele;
        v.push_back(ele);
    }
    sortZeroAndOnes(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;
    
    
    return 0;
}