#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int j=1;j<=row;j++)
        {
            cout<<" *";
        }
        int space=(2*n)-(2*row);
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=row;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    for(int row=n;row>=1;row--)
    {
        for(int j=1;j<=row;j++)
        {
            cout<<" *";
        }
        int space=(2*n)-(2*row);
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=row;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }

    return 0;
}