#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        // int stars;
        for(int stars=1;stars<=n-row+1;stars++)
        {
            cout<<"*";
        }
        for(int space=1;space<(2*row)-1;space++)
        {
            cout<<" ";
        }
        for(int stars=1;stars<=n-row+1;stars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n;row>=1;row--)
    {
        // int stars;
        for(int stars=1;stars<=n-row+1;stars++)
        {
            cout<<"*";
        }
        for(int space=1;space<(2*row)-1;space++)
        {
            cout<<" ";
        }
        for(int stars=1;stars<=n-row+1;stars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}