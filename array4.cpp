//Find the last occurance of an element x in a given array
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
    int occurancem1=-1;
    int occurancem2=-1;
    for (int i = 0;i < v.size(); i++) //Method 1
    {
        if (v[i]==x)
        {
            occurancem1=i;
        }
        
    }
     for (int i = v.size()-1;i >=0; i--) //Method 2
    {
        if (v[i]==x)
        {
            occurancem2=i;
            break;
        }
        
    }
    cout<<occurancem1<<endl;
    cout<<occurancem2;
    
    return 0;
}