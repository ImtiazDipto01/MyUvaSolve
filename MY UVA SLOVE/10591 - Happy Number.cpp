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
#define size 100000

using namespace std;

long long int a[size];

int main()
{
    long long int i,j,k,t_case,input,sum,rem,n,flag,count=0;
    scanf("%lld",&t_case);
    while(scanf("%lld",&input)==1)
    {
        count++;
        sum=0;
        memset(a,0,sizeof(a));
        if(input<=9)
        {
            n=(input*input);
            if(n<=9)
            {
                n=n*n;
            }
        }
        if(input>9)
        {
            n=input;
        }
        while(n!=0)
        {
            rem=n%10;
            sum=(sum+(rem*rem));
            n=n/10;
            if(n==0)
            {
                if(sum==1)
                {
                    flag=1;
                    break;
                }
                if(sum==input)
                {
                    flag=0;
                    break;
                }
                if(a[sum]==0)
                {
                    a[sum]=1;
                    n=sum;
                    sum=0;
                }
                else if(a[sum]!=0)
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            printf("Case #%lld: %lld is a Happy number.\n",count,input);
        }
        else
        {
            printf("Case #%lld: %lld is an Unhappy number.\n",count,input);
        }
        if(count==t_case)
        {
            break;
        }
    }
    return 0;
}
