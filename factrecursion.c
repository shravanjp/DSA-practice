#include<stdio.h>
int facto(int num)
{
    if(num==0||num==1)
    return 1;
    else
    {
        return (num*facto(num-1));
    }
    
}
int main()
{
    int num,ans;
    printf("Enter the positive integer:\n");
    scanf("%d",&num);
    ans=facto(num);
    printf("Factorial of %d is : %d",num,ans);
    return 0;
}