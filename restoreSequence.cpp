#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
using namespace std;
void check(int a[],int b[],int size)
{
    for(int i=1;i<=size;i++)
    {
        if(b[i]!=i)
        {
            a[i]=a[b[i]];
        }
    }
    for(int i=1;i<=size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void restoreSequence(int b[],int size)
{
   int n=(10000+1);
   bool prime[n];
   memset(prime,true,sizeof(prime));
   for(int p=2; p*p<=n; p++)
   {
       if(prime[p]==true)
       {
           for(int i=p*p; i<=n; i+=p)
           {
               prime[i]=false;
           }
       }
   }

   int a[size+1], counter=1;
   for(int i=2;i<=n;i++)
   {
       if(prime[i]==true && counter<=size)
       {
           a[counter++]=i;
       }
   }

    check(a,b,size);
}

int main()
{
    int t,size;
    cin>>t;
    while(t--)
    {
        cin>>size;
        int b[size+1];
        for(int i=1;i<=size;i++)
        {
            cin>>b[i];
        }
        restoreSequence(b,size);

    }
}