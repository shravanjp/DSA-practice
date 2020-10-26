#include<iostream>
using namespace std;
int shiftBook(int arr[],int n)
{
    int count=0,b[30],zcnt=0,total=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
           b[count++]=arr[i];
        }
        else
        {
            ++zcnt;
            if(b[count-1]==1)
            {
                total=total+zcnt;
            }
        }
        
        
    }
    return total;
}
int main()
{
    int t,n,arr[100],ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans=shiftBook(arr,n);
    cout<<ans;
    }
    return 0;
}