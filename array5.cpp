//Count the number of occurances of a particular element x
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
    int occuranceM2=0;
    for (int i = 0;i < v.size(); i++) //Method 1
    {
        if (v[i]==x)
        {
            occurance+=1;
        }
        
    }
    for(int ele:v) //Method 2
    {
        if (ele==x)
        {
            occuranceM2++;
        }
        
    }
    
    cout<<occurance<<endl;
    cout<<occuranceM2<<endl;
    
    
    return 0;
}