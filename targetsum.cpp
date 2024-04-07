/* Find the total number of pairs in the given array whose 
sum is equal to the given value of x*/
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,4,5,6};
    int targetsum=6;
    int size=5;
    int pair=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(array[i]+array[j]==targetsum)    
            {
                pair++;
            }
            
        }    
    }
    cout<<pair<<endl;
    return 0;
}