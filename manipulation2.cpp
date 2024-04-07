// Find the second largest element in the given array
// Method 1
#include<iostream>
using namespace std;
int largestElementIndex(int array[], int size)
{
    int max=INT16_MIN;
    int maxindex=-1;
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
            maxindex=i;
        }  
    }
    return maxindex;
}
int main()
{
    int array[]={2,4,8,9,7,6,9};
    int n=7;
    int indexoflargest = largestElementIndex(array,n);
    cout<<"Largest Element\t"<<array[indexoflargest]<<endl;
    // array[indexoflargest]=-1;
    int largestelement= array[indexoflargest];
    for (int i = 0; i < n; i++)
    {
        if (array[i]==largestelement)
        {
                array[i]=-1;
        } 
    }
    int indexOfSecondLargest= largestElementIndex(array,n);
    cout<<"Second Largest Element\t"<<array[indexOfSecondLargest]<<endl;
    return 0;
}
