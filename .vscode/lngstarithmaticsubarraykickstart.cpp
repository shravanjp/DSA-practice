#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[40],size,len=0,dif,currentDif;

    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            currentDif=arr[j]-arr[j-1];
            
        }
    }
   
    return 0;
}