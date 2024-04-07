/* Find the difference between the sum of elements at even
 indices to the sum of elements at odd x */
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5,6};

    int sum=0;
    for (int i = 0; i < 6; i++)
    {
        if (i%2==0)
        {
            sum+=array[i];
        }
        else
        {
            sum-=array[i];

        }
        
    }
    cout<<sum<<endl;
    return 0;
}