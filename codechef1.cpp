#include <iostream>
using namespace std;
void checkSum(int x)
{
    int cntr=0,j,i;
    for(i=x;i>=0;i--)
    {
        for(j=0;j<=x;j++)
        {
            if(x==((i&j)+(i|j)));
            {
                cout<<i<<" "<<j;
                return;
            }
        }
        
    }
    cout<<-1;
}

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    checkSum(x);
	}
	return 0;
}
