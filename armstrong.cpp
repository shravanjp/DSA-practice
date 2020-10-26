#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem,sum=0;
    int originalNo=n;
    while(n!=0)
    {
        rem=n%10;
        sum+=pow(rem,3);
        n/=10;
    }
    if(originalNo==sum)
    {
        cout<<"ARMSTRONG NUMBER"<<endl;
    }
    else
    {
        cout<<"Not an armstrong number:";
    }
    
    return 0;
}