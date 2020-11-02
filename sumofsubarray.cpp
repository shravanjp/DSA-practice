#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20],sum=0,size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        sum=0;
        for(int j=i;j<size;j++)
        {
            sum=sum+arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}