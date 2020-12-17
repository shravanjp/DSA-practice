#include<iostream>
using namespace std;
void hcf(int a,int b)
{
    int rem;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    cout<<a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    hcf(a,b);
    return 0;
}
// #include<iostream>
// using namespace std;
// void divisible(int num,int a,int b)
// {
//     int c1=num/a;
//     int c2=num/b;
//     int c3=num/(a*b);
//     cout<<c1+c2-c3;
// }
// int main()
// {
//     int a,b,n;
//     cin>>n>>a>>b;
//     divisible(n,a,b);
//     return 0;
// }