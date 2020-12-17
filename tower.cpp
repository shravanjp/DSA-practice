#include<iostream>
using namespace std;
void towerOfHannoi(int n,char src,char auxi,char dest)
{
    if(n==0)
    {
        return;
    }
    towerOfHannoi(n-1,src,dest,auxi);
    cout<<"Move"<<n<<" from "<<src<<" to "<<dest<<endl;
    cout<<n<<endl;
    towerOfHannoi(n-1,auxi,src,dest);
}
int main()
{
    int n;
    char source='A',auxi='B',dest='C';
    cin>>n;
    towerOfHannoi(n,source,auxi,dest);
    return 0;
}