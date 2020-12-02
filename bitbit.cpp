#include<iostream>
using namespace std;
int setBit(int n,int bit)
{
    return(n|(1<<bit));
}
int findBit(int n,int bit)
{
    return((n&(1<<bit))!=0);
}
int clearBit(int n,int bit)
{
    int mask= ~(1<<bit);
    return (n&mask);
}
int updateBit(int n,int bit,int value)
{
    int mask= ~(1<<bit);
    n=n&mask;
    return(n|(value<<bit));
}
int main()
{
    int num,bit,value;
    cin>>num>>bit>>value;
    int ans=updateBit(num,bit,value);
    cout<<ans;
    return 0;
}


