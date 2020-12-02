#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int c0,c1,h,n,t;
    cin>>t;
    string ss;
     unsigned long long int s;
    while(t--)
    {
        cin>>n>>c0>>c1>>h;
        cin>>ss;
        s=stoull(ss, nullptr, 10);
        int ex0=0,ex1=0;
        int mn;
        int mx=max(c0,c1);
        
        if(c0<c1)
        {
            mn=c0;
        }
        else if(c1<c0)
        {
            mn=c1;
        }

        
    
       if(s==0)
       {
           ex0=n;
       } 
        

        while(s>0)
        {
            
            int rem=s%10;
            if(rem==0)
            {
                ex0++;
            }
            else
            {
                ex1++;
            }
            s=s/10;

        }
            int a;
            if(mn==c0)
            {
                a=ex1;
            }
            else
            {
                a=ex0;
            }
            if(h>mx)
            {
                cout<<((ex0*c0)+(ex1*c1))<<endl;
            }
            else if(c0!=c1)
            {
            cout<<((h*a)+(mn*n))<<endl;
            }
            
            else
            {
                cout<<(c1*n)<<endl;
            }
            


        



    }
    return 0;
}