#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    ch=toupper(ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    cout<<"VOWEL";
    else
    {
        cout<<"CONSTANTS";
    }
    
    return 0;
}