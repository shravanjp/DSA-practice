#include<iostream>
#include<math.h>
using namespace std;
int binaryToDecimal(int n)
{
    int rem,sum=0,i=0;
    int powt=1;
    while(n!=0)
    {
        rem=n%10;
        // sum+=(rem*pow(2,i++));
        sum+=rem*powt;
        //for octal powt*=8;
        powt*=2;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
}