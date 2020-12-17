#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=k;i++)
        {
            cout<<"a";
        }
        for(int i=k;i<=n;i++)
        {
            cout<<"b";
        }
        cout<<endl;
    }
    return 0;
}