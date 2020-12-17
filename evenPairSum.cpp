#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	   // int res=0;
	    
	    int m=max(a,b);
	    int n=min(a,b);
	    int mxo=(m/2)+(m%2);
	    int mno=(n/2)+(n%2);
	    
	    int res1=(mxo*mno);
	    
	    int mxe=(m/2);
	    int mne=(n/2);
	    
	    int res2=(mxe*mne);
	    
	    cout<<(res1+res2)<<endl;
	}
	return 0;
}
