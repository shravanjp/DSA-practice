#include<iostream>
using namespace std;

void reverseArray(int arr[],int size)
{
    int endPtr=size-1;
    int temp=0;
   for(int i=0;i<(size/2);i++)
   {
       temp=arr[i];
       arr[i]=arr[endPtr];
       arr[endPtr--]=temp;
   }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}
int main()
{
    int arr[20],size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr,size);
    print(arr,size);
    return 0;
}