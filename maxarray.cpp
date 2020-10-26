// #include<iostream>
// #include<climits>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4]={5,2,8,11};
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<4;i++)
    {
    maxNo=max(maxNo,arr[i]);
    minNo=min(minNo,arr[i]);
    }
    cout<<"MAX NO:"<<maxNo;
    cout<<"\nMIN NO:"<<minNo;
    return 0;
}