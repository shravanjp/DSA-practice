#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    char arr[size+1];
    cin.ignore();
    cin.getline(arr,size);
    cin.ignore();

    int maxLen=INT_MIN,currentLen=0;
    int i=0,mxIndex=0,stIndex=0;

    while(1)
    {
        
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currentLen>maxLen)
            {
            
                maxLen=currentLen;
                stIndex=i-maxLen;
            }
            currentLen=0;

        }
        else
        
        {
        
        currentLen++;
        }
        
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
        
        
        
    }
     
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++)
    {
        cout<<arr[i+stIndex];
    }
}