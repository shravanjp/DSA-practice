#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int rowStart=0,rowEnd=r-1,columnStart=0,columnEnd=c-1;
    while(rowStart<=rowEnd && columnStart<=columnEnd)
    {
        for(int col=columnStart;col<=columnEnd;col++)
        {
            cout<<arr[rowStart][col]<<"  ";
        }
        rowStart++;

        for(int row=rowStart;row<=rowEnd;row++)
        {
            cout<<arr[row][columnEnd]<<"  ";
        }
        columnEnd--;

        for(int col=columnEnd;col>=columnStart;col--)
        {
            cout<<arr[rowEnd][col]<<"  ";
        }
        rowEnd--;

        for(int row=rowEnd;row>=rowStart;row--)
        {
            cout<<arr[row][columnStart]<<"  ";
        }
        columnStart++;
    }
    return 0;
}