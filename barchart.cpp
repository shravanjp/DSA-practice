#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int size,mx;
    cin>>size;
    int arr[size];
    // int carr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
     mx=*max_element(arr,arr+size);
    // copy(arr,arr+size,carr);
    for(int i=mx;i>0;i--)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[j]>=i)
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}