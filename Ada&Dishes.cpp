#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,arr[10],size;
    cin>>t;
    while(t--)
    {
        cin>>size;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+size,greater<int>());
        
            // int counter=0;
            if(size==1)
            {
                cout<<arr[0]<<endl;
            }
            else if (size==2)
            {
                cout<<arr[0]<<endl;
            }
            else
            {
                int sum=0;
                for(int i=0;i<size;i++)
                {
                    sum+=arr[i];
                }
                int h=(sum/2);
                int hh=(h/2);
                h=h-hh;
                h=h+hh;
                cout<<h<<endl;
            }
            
            
            
        
    }
    return 0;
}