#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cin>>a>>b;
    cout<<"a= b="<<a                                         <<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"a=              "<<a<<"\tb="<<b<<endl;
    return 0;
}

