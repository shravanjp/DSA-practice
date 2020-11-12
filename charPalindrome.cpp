#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    char arr[size+1];
    cin>>arr;
    bool check=true;
    for(int i=0;i<(size/2);i++)
    {
        if(arr[i]!=arr[size-1-i])
        {
            check=false;
            break;
        }
    }
    if(check==true)
    {
        cout<<"Palindrome\n";
    }
    else
    {
        cout<<"Not a Palindrome\n";
    }
    
    return 0;
}