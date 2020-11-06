#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,a[100],b[100],x,n,flag=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        flag=1;
        for(int i=0;i<n;i++)
        {
            if((a[i]+b[i])>x)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        cout<<"Yes\n";
        else
        {
            cout<<"No\n";
        }
        

    }
    return 0;
}