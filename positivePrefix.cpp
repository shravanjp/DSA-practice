#include<iostream>
#include<math.h>
using namespace std;
void resultFun(int prefixArr[],int n,int k)
{
    int posTerm=(n/2)+(n%2);
    if(k>posTerm)
    {
        int d=k-posTerm;
        for(int i=n;i>=1;i--)
        {
            if(d>0 && prefixArr[i]<0)
            {
                prefixArr[i]=abs(prefixArr[i]);
                d--;
            }
        }
    }
    else if(k<posTerm)
    {
        int d=posTerm-k;
        for(int i=n;i>=1;i--)
        {
            if(d>0&&prefixArr[i]>0)
            {
                prefixArr[i]=(-prefixArr[i]);
                d--;
            }
            
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<prefixArr[i]<<" ";
    }
    cout<<endl;
}
void positivePrefix(int prefixArr[],int n,int k)
{
    if(n%2==0)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                prefixArr[i]=(-prefixArr[i]);
            }
        }
    }
    else if(n%2==1)
    {
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                prefixArr[i]=(-prefixArr[i]);
            }
        }
    }
    resultFun(prefixArr,n,k);
}
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int prefixArr[n+1];
        for(int i=1;i<=n;i++)
        {
            prefixArr[i]=i;
        }
        positivePrefix(prefixArr,n,k);
    }
    return 0;
}