#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=0;
    if(n==0||n==1)
    flag=1;
    else   
    {
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        flag=1;

    }
    }
    if(flag==0)
    cout<<"prime number";
    else 
    cout<<"non prime";
    
    return 0;
}