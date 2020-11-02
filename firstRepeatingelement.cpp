#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    const int N = 100;
    int idx[N];
    int minidx=INT_MAX;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        
    }
    // for(int i=0;i)
    for(int i=0;i<size;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            minidx=min(minidx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
        
    }
    if(minidx==INT_MAX)
    {
        cout<<"-1 :NO REPEATING ELEMENT";
    }
    else
    {
        cout<<minidx<<endl;
    }
    
    return 0;

}