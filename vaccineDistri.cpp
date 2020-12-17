#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,d,n;
	cin>>t;
	while(t--)
	
	{
	    int count=0;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=80||arr[i]<=9)
	        {
	            count++;
	        }
	    }
        int riskDay;
        if(count>=d)
        {
	         riskDay=(count/d)+(count%d);
        }
        else
        {
             riskDay=1;
        }
        
	    int a=n-count;
	    int day=(a/d)+(a%d);
	    cout<<riskDay+day<<"\n";
	    
	    
	}
	return 0;
}
