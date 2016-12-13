#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#define size 1000000

using namespace std;

long long a[size],d_prime[size];

int main()
{
    long long int i,j,k,t_case,index=0,max=1000000,n1,n2,temp,sum,rem,count=1,temp2,ans;
    for(i=4;i<=max;i+=2)
    {
        a[i]=1;
    }
    for(i=3;i * i<=max;i+=2)
    {
        if(a[i]==0)
        {
            for(j=i*2;j<=max;j+=i)
            {
                a[j]=1;
            }
        }
    }
    d_prime[0]=0;
    d_prime[1]=0;
    d_prime[2]=1;
    for(i=3;i<=max;i++)
    {
        sum=0;
        if(a[i]==0)
        {
            temp=i;
            while(temp!=0)
            {
                rem=temp%10;
                sum=sum+rem;
                temp/=10;
            }
        }
        if(a[sum]==0&&sum!=0&&sum!=1)
        {
            count++;
            d_prime[i]=count;
        }
        else
        {
            d_prime[i]=count;
        }
    }
    scanf("%lld",&t_case);
    for(i = 1;i <= t_case; i++)
    {
        scanf("%lld %lld",&n1,&n2);
        ans = (d_prime[n2] - d_prime[n1-1]);
        printf("%lld\n",ans);
    }
    return 0;
}

