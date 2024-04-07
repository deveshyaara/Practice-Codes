// Find the second largest element in the given array
// Method 2
#include<iostream>
using namespace std;
int Second_largestElement(int array[], int size)
{
    int max=INT16_MIN;
    int second_max= INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
           
        }  
    }
     for (int i = 0; i < size; i++)
    {
        if (array[i]>second_max && array[i]!=max)
        {
            second_max=array[i];
           
        }  
    }
    return second_max;
}
int main()
{
    int array[]={2,4,8,9,7,6,9};
    int n=7;
    cout<<Second_largestElement(array,n)<<endl;
    return 0;
}
