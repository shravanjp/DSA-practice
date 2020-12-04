#include<iostream>
using namespace std;
bool isPowerOfTwo(int num)
{
    return (num && !(num &(num-1)));
}
int numberOfOnes(int num)
{
    int count=0;
    while(num)
    {
        count++;
        num=(num&(num-1));
    }
    return  count;
}
void generateSubsets(char *arr,int n)
{
   for(int i=0;i<(1<<n);i++)
   {
       for(int j=0;j<n;j++)
       {
           if(i & (1<<j))
           {
               cout<<arr[j]<<" ";
           }
       }
       cout<<endl;
   }
    
}
int main()
{
   int num;
   char arr[]={'a','b','c','d','e'};
//    cin>>num;
//    int ans=isPowerOfTwo(num);
    // int ans=numberOfOnes(  num);
    num=sizeof(arr)/sizeof(arr[0]);
//    cout<<ans;
generateSubsets(arr,num);
    return 0;
}