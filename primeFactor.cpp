#include<iostream>
using namespace std;
void primeFactor(int num)
{
    int spf[num+1]={0};
    for(int i=2;i<=num;i++)
    {
        spf[i]=i;
    }
    for(int i=2;(i*i)<=num;i++)
    {
        if(spf[i]==i)
        {
            for(int j=(i*i);j<=num;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    while(num!=1)
    {
        cout<<spf[num]<<" ";
        num=num/spf[num];
    }
}
int main()
{
    int num;
    cin>>num;
    primeFactor(num);
    return 0;
}

// #include<iostream>
// using namespace std;
// void primeFactor(int num)
// {
//     for(int div=2;(div*div)<=num;div++)
//     {
//         while(num%div == 0)
//         {
//             num=num/div;
//             cout<<div<<" ";
//         }
//     }
//     if(num!=1)
//     {
//         cout<<num;
//     }
// }
// int main()
// {
//     int num;
//     cin>>num;
//     primeFactor(num);
//     return 0;
// }