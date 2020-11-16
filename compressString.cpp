#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;

    char ans[100];
    
    ans[0]=str[0];
    int count=1;

    for(int i=1;i<str.size();i++)
    {
        if(str[i]!=str[i-1])
        {
            ans[count]=str[i];
            count++;
        }
    }

    cout<<ans;
}