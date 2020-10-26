#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    // for(int i=row;i>=1;i--)
    // {
    //     int counter=1;
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<counter++<<" ";
            
    //     }
    //     cout<<endl;
    // }
    return 0;
}