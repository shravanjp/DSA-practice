#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,arr[100],recordDay=0,mx;
    cin>>size;
    for(int i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    cout<<endl;
    mx=INT_MIN;
    arr[size]=mx;
    // size=size-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            cout<<arr[i]<<endl;
            recordDay++;
            mx=arr[i];
        }
    }
    cout<<recordDay<<endl;
    return 0;
}