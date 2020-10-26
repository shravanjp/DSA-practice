#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int space=1;space<=(n-row);space++)
        {
            cout<<" ";
        }
        for(int stars=1;stars<=n;stars++)
        {
            if(row==1||row==n||stars==1||stars==n)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}