#include<iostream>
#include<math.h>
using namespace std;
int reverseBinaryString(string str,int len)
{
    int counter=0;
    for(int i=1;i<len;i++)
    {
        
        if(str[i]==str[i-1])
        {
            counter++;
        }
    }
    return(ceil(counter/2.0));
}
int main()
{
    int t,len;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>len;
        cin>>str;
        cout<<reverseBinaryString(str,len);
    }
    return 0;
}