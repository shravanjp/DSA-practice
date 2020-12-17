#include<iostream>
using namespace std;
void primeSeive(int num)
{
    int prime[num+1]={0};
    for(int i=2;i*i<=num;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=num;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=num;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int num;
    cin>>num;
    primeSeive(num);
    return 0;
}