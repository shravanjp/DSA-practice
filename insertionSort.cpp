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
void insertionSort(int arr[],int size)
{
    for(int i=1;i<=n;i++)
    {
        int current=a[i];
        int j=i-1;

        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
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
    insertionSort(arr,size);
    return 0;
}