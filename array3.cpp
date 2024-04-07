//Linear Search
#include<iostream>
using namespace std;
int main()
{
    int array[]={3,5,10,13};
    int key=10;
    int ans= -1;
    for (int i = 0; i < 4; i++)
    {
        if(array[i]==key)
        ans=i;
        
    }
    
    cout<<ans<<endl;
    return 0;
}