// Sort an array consisting of only zeros and one
#include<iostream>
using namespace std;
int main()
{
    int a[]={0,0,0,1,1,1,1,0,1,0,1,0,1,0,1};
    int size=sizeof(a)/sizeof(a[0]);
    int count0=0;
    for (int i = 0; i < size; i++)
    {
        if(a[i]==0)
        {
            count0++;
        }
    }
    for (int i = 0; i <size; i++)
    {
            if (i<count0)
            {
                a[i]=0;
            }
            else
            {
                a[i]=1;
            }       
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}