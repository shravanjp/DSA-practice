#include<iostream>
using namespace std;
int check(int x)
{
    int count=0,num=1,ans,rem,var;
    
    
    num=x%10;
    
    while(x!=0)
    {
        rem=x%10;
        x=x/10;
        ++count;
    }
    if(count==1)
    {
        var=1;
    }
    else if(count==2)
    {
        var=3;
    }
    else if(count==3)
    {
        var=6;
    }
    else
    {
        var=10;
    }
    
    ans=(--num*10)+var;
    return ans;
}
int main()
{
    int t,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>x;
        ans=check(x);
        cout<<ans<<endl;
    }
    return 0;
}