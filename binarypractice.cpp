#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    sort(arr,arr+size);
    int flag=-1;
    int beg=0,end=size-1,mid;
    while(beg<=end)
    {
        mid=((beg+end)/2);
        if(arr[mid]==key)
        {
            flag=mid+1;
            return flag;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        
    }
    return flag;
}
int main()
{
    int arr[100],size,key;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    int ans=binarySearch(arr,size,key);
    if(ans!=-1)
    {
        cout<<"Element is found at position : "<<ans<<endl;
    }
    else
    {
        cout<<"Element is not found";
    }
    
    return 0;
}