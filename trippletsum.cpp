// Counts the number of triplets whose sum is equal to given value of x
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,5,6};
    int targetsum=6;
    int size=5;
    int tripplet=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++){
            if(array[i]+array[j]+array[k]==targetsum)    
            {
                tripplet++;
            }
            } 
        }    
    }
    cout<<tripplet<<endl;
    return 0;
}