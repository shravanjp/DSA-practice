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
void selectionSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(&arr[j],&arr[i]);
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
    selectionSort(arr,size);
    return 0;
}