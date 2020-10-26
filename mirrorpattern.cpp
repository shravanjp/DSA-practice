// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(int k=i;k>1;k--)
//         {
//             cout<<k<<" ";
//         }
//         for(int l=1;l<=i;l++)
//         {
//             cout<<l<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//ANOTHER METHOD

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    { 
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}