#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

    int freq[26];
    fill(freq,freq+26,0);

    for(int i=0;i<str.size();i++)
    {
        freq[str[i]-'a']++;
    }

    int maxFreq=0;
    char ele='a';

    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxFreq)
        {
            maxFreq=freq[i];
            ele=i+'a';
        }
    }

    cout<<ele<<"  "<<maxFreq<<endl;
}