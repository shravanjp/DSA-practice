#include<iostream>
#include<cmath>
using namespace std;
int find(int d1,int v1,int d2,int v2)
{
    int result;
    if(d1<d2)
    {
        result=v1;
    }
    else
    {
        result=v2;
    }
    return result;
}

int main()
{
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    if(d1==d2)
    {
        float res=(d1-1)+ceil((float(p)/float(v1+v2)));
        cout<<res<<endl;
    

    }
    else if (d1>d2)
    {
        int count=0;
        int a=d1;
        int b=d2;
        int res=0;
        while(res<p)
        {
            count++;
            if(b<a)
            {
                res=res+v2;
                b++;
                continue;
            }
            res=res+(v1+v2);
            a++;
            b++;
            
        }
        count=count+(d2-1);
        cout<<count;
    }
    else
    {
        int count=0;
        int a=d1;
        int b=d2;
        int res=0;
        while(res<p)
        {
            count++;
            if(a<b)
            {
                res=res+v1;
                a++;
                continue;
            }
            res=res+(v1+v2);
            a++;
            b++;

        }
        count=count+(d1-1);
        cout<<count;
    }
    
    
    
    return 0;
}