#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int stars=1;stars<=row;stars++)
        {
            if(stars==1||stars==row)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        for(int space=1;space<=(2*n)-(2*row);space++)
        {
            cout<<" ";
        }
        for(int stars=1;stars<=row;stars++)
        {
            if(stars==1||stars==row)
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
    for(int row=n;row>=1;row--)
    {
        for(int stars=1;stars<=row;stars++)
        {
           if(stars==1||stars==row)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int space=1;space<=(2*n)-(2*row);space++)
        {
            cout<<" ";
        }
        for(int stars=1;stars<=row;stars++)
        {
            if(stars==1||stars==row)
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