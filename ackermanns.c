#include<stdio.h>
int ackermann(long int num1,long int num2)
{
    if(num1==0)
    return num2+1;
    else if (num1!=0&&num2==0)
    {
        return ackermann(num1-1,1);
    }
    else if(num1!=0&&num2!=0)
    {
        return ackermann(num1-1,ackermann(num1,num2-1));
    }
    
}
int main()
{
    int num1,num2;
    long int ans;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    ans=ackermann(num1,num2);
    printf("Ackermann value of %d,%d is %ld: ",num1,num2,ans);
    return 0;
}