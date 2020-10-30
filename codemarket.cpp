#include<iostream>
using namespace std;
bool buyCan(int l,int r)
{
    bool flag=0;
    if(l*2>r)
    {
        flag=1;

    }
    return flag;
}
int main()
{
    int t,l,r;
    bool ans;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        ans=buyCan(l,r);
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}