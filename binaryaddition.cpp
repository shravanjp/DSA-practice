#include<iostream>
using namespace std;
int binaryAddition(int num1,int num2)
{
    int ans,rem1,rem2;
    rem1=num1%10;
    rem2=num2%10;
    if(rem1==0&&rem2==0)
    {
        
    }
    ans=((rem1+rem2)*10);

    return ans;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int ans=binaryAddition(num1,num2);
    cout<<ans;


    return 0;
}