#include<stdio.h>
// using namespace std;
void towerOfHannoi(int n,char source,char destination,char helper)
{
    if(n==1)
    {
        printf("Move %d from %c to %c\n",n,source,destination);
        return;
    }
    towerOfHannoi(n-1,source,helper,destination);
    printf("Move %d from %c to %c\n",n,source,destination);
    towerOfHannoi(n-1,helper,destination,source);

}
int main()
{
    int n;
    scanf("%d",&n);
    char source='A',destination='C',helper='B';
    towerOfHannoi(n,source,destination,helper);
    return 0;
}