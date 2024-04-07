//Count the number of elements strictly greater than the given number x
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
    cout<<"Enter X";
    int x;
    cin>>x;
    int occurance=0;
    for (int i = 0;i < v.size(); i++) //Method 1
    {
        if (v[i]>x)
        {
            occurance++;
        }
        
    }
    cout<<occurance<<endl;
    return 0;
}