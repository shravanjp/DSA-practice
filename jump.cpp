#include<iostream>
using namespace std;
int main()
{
    int t,dest,jump=1;
    int count=0,y=0;
    cin>>t;
    while(t--)
    {
        cin>>dest;
        jump=1;
        y=0;
        count=0;
        while(y!=dest)
        {
            count++;
            y=y+jump;
            if(y==dest)
            {
                cout<<count<<" ";
                break;
            }
            else if(y>dest)
            {
                cout<<(count+(y-dest))<<" ";
                break;
            }
            else
            {
                jump++;
            }
            
            
        }
        if(dest==0)
        {
            cout<<0<<" ";
        }
    }
    return 0;
}