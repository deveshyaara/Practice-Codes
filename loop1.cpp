//Count a number of digits of a given number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //Given Number
    int digits=0;
    while(n>0){
        digits++;//1
        n=n/10;//0
    }
    cout<<digits<<endl;
    return 0;
}