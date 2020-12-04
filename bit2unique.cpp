#include<iostream>
using namespace std;
bool setBit(int n,int pos)
{
    return((n&(1<<pos))!=0);
}
void unique(int arr[],int n)
{
    int xorSum=0;
    for(int i=0;i<n;i++)
    {
        xorSum=xorSum^arr[i];
    }
    int tempSum=xorSum;
    //finding the position of the set bit
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit=xorSum&1;
        pos++;
        xorSum=(xorSum>>1);

    }
    //XORing the elements with kth bit set
    int newXor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1))
        {
            newXor=newXor^arr[i];
        }
    }
    cout<<newXor<<endl;
    cout<<(tempSum^newXor);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unique(arr,n);
    return 0;
}