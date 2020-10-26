#include<stdio.h>
int fibonacci(int num)
{
    
    if(num<=1)
    return num;
    else 
    return (fibonacci(num-1)+fibonacci(num-2));
    
}
int main()
{
    int num;
    printf("Enter the number of fibonacci series: ");
    scanf("%d",&num);
    printf("Fibonacci Series :\n");
    for(int iterator=0;iterator<num;iterator++)
    {
        printf("%d  ",fibonacci(iterator));
    }
    return 0;
}