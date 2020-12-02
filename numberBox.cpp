#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,mn=INT_MAX,cnt=0;
    long long int sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int arr[n][m];
        sum=0,cnt=0;
        mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]<0)
                {
                    cnt++;
                }
                mn=min(mn,abs(arr[i][j]));
                sum+=abs(arr[i][j]);
            }
        }
    
    if(cnt%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<(sum-(2*mn))<<endl;
    }
    }
    
    return 0;
}