#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5]={88,1,8,2,5};
    sort(arr,arr+5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}