#include<iostream>
using namespace std;


void check(int n)
{
    int num=1;

	int i, j, flag;

	
	
	for (i = 1; i <= 100000000; i++) 
    {

		
		if (i == 1 || i == 0)
			continue;

		
		flag = 1;

		for (j = 2; j <= i / 2; ++j)
         {
			if (i % j == 0)
            {
				flag = 0;
				break;
			}
		}

		
		if (flag == 1)
        {
            if((num)!=n)
            {
                cout<<i*2<<" ";
                num++;
            }
            if(num==n)
            {
                return;
            }
        }
	}
}

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        cin>>n;
        check(n+1);
        cout<<endl;
    }
    return 0;
}