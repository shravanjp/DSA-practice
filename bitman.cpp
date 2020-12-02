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
int main()
{
   int num;
   cin>>num;
//    int ans=isPowerOfTwo(num);
    int ans=numberOfOnes( num);
   cout<<ans;
    return 0;
}