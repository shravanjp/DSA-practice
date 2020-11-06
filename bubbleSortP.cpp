#include<iostream>
#include<climits>
using namespace std;
void swap(int *var1,int *var2)
{
    int temp;
    temp=*var1;
    *var1=*var2;
    *var2=temp;
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=1;j<=size-i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                swap(&arr[j],&arr[j-1]);
            }
        }
    }
    print(arr,size);
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    bubbleSort(arr,size);
    return 0;
}