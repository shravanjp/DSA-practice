//BRUTE FORCE

#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int mx = 0,maxSum=INT_MIN;

     for(int i=0; i<size; i++)
    {
        for(int j=0;j<size;j++)
        {
            mx=0;
            for(int k=i;k<=j;k++)
            {
                // cout<<arr[k]<<" ";
                mx+=arr[k];
            }
            maxSum=max(mx,maxSum);
            cout<<endl;
        }
        // cout<<endl;
    }
    cout<<maxSum;
    return 0;
}