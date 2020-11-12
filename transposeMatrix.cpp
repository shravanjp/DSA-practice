#include<bits/stdc++.h>
using namespace std;
// void transpose(int *mtrix,int row,int col)
// {
   
// }

int main()
{
    int row,col;
    cin>>row>>col;
    int mtrix[row][col];
    for(int r=0;r<row;r++)
    {
        for(int c=0;c<col;c++)
        {
            cin>>mtrix[r][c];
        }
    }
     for(int r=0;r<row;r++)
    {
        for(int c=r;c<col;c++)
        {
            // if(r!=c)
            
                int temp=mtrix[r][c];
                mtrix[r][c]=mtrix[c][r];
                mtrix[c][r]=temp;
            
        }
    }
    // print(mtrix,row,col);
     for(int r=0;r<row;r++)
    {
        for(int c=0;c<col;c++)
        {
            cout<<(mtrix[r][c])<<" ";
        }
        cout<<endl;
    }

    return 0;
}