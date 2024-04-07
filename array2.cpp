//Find the maximum value out of an array
#include<iostream>
using namespace std;
int main()
{
   // cout<< "Number of elements you want to enter:"<<endl;
    int array[]={1,3,12,5};
    int max=0;
    for (int i = 0; i <4; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        
    }
    cout<<max<<endl;
    return 0;
}