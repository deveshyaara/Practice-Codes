/* Rotate the given array 'a' by k steps, where K is non-negative.
NOTE:K can be greater than n as well where n is the size of array "a" */
#include<iostream> 
using namespace std;
int main()
{
    int array[]={1,2,3,4,5,};
    int n=5;
    int k=2;
    // K can be zero 
    if (k>n)
    {
            k=k%n;
    }
    int j=0;
    int ansarray[5];
    // Inserting last k elements in array
    for (int i = n-k; i < n; i++)
    {
        ansarray[ j++]=array[i];
    }
    // Inserting first elements
    for (int i = 0; i <=k; i++)
    {
        ansarray[j++]=array[i];
    }
    for (int i = 0; i < n; i++)
    {
            cout<<ansarray[i]<<"\t";
    }
    return 0;
}