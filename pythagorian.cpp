#include<iostream>
using namespace std;
bool isPtriplet(int a,int b,int c)
{
    int y,z;
    int x=max(a,max(b,c));
    if(x==a)
    {
        y=b;
        z=c;
    }
    else if (x==b)
    {
        y=a;
        z=c;
    }
    else
    {
        y=a;
        z=b;
    }
    
    

    if((x*x)==((y*y)+(z*z)))
    return true;
    else
    {
        return false;
    }
    
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(isPtriplet(a,b,c))
    cout<<"Pythagorian triplet";
    else
    {
        cout<<"NOT A pythagorian triplet:";
    }
    
    return 0;
}