/* Rotate the given array 'a' by k steps, where K is non-negative.
NOTE:K can be greater than n as well where n is the size of array "a" */
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k = 3;
    k = k % v.size();
    // reverse (v.begin(), v.end()); My system is not accepting this command 
    // reverse(v.begin(), v.begin() + k);
    // reverse(v.begin() + k, v.end());  16,17,18 are not comment 
    for (int a : v)
    {
        cout << a << " ";
    }
    return 0;
}