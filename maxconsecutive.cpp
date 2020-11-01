#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int mx=INT_MIN;
    int arr[20],size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
     mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}