#include<stdio.h>
int gcd(int num1,int num2)
{
    int hcf;
    if(num2==0)
    {
        hcf=num1;
        return hcf;
    }
    else if (num1==0)
    {
        hcf=num2;
        return hcf;
    }
    else return gcd(num2,num1%num2);
    
}
int main()
{
    int num1,num2,ans;
    printf("Enter the two number: ");
    scanf("%d%d",&num1,&num2);
    ans=gcd(num1,num2);
    printf("GCD of %d and %d is: %d",num1,num2,ans);
    return 0;
}