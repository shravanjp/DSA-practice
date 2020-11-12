#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[3],t,size,a,b;
    cin>>t;
    while(t--)
    {
         a=0,b=0;
        cin>>size;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+size,greater<int>());
        int i=1;
        a=arr[0];
        while(i<size)
        {
            if(a<b)
            {
                a+=arr[i];
            }
            else
            {
                b+=arr[i];
            }
            i++;
            
        }
        cout<<max(a,b)<<endl;
    }
    return 0;
}