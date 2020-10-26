#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int beg,end,mid;
    beg=0;
    end=size-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    return -1;
}
int main()
{
    int arr[100],size,ans,key;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cin>>key;
    ans=binarySearch(arr,size,key);
    // cout<<ans<<endl;
    if(ans!=-1)
    {
        cout<<"element "<<arr[ans-1]<<"is present at position "<<ans;
    }
    else
    {
        cout<<"Element is not present"<<endl;
    }
    
    return 0;
}