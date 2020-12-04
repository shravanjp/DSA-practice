#include<iostream>
using namespace std;
int main()
{
    // vector<int> p;
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int xorSum=0;
    for(int i=0;i<n;i++)
    {
        xorSum=(xorSum^arr[i]);
    }
    cout<<xorSum;
    return 0;
}