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

long int a[size],b[size];

int main()
{
    long long int i,j,k,n,index,temp,c,d,max;
    max=1000000;
    index=0;
    for(i=3;i<=1000;i+=2)
    {
        if(a[i]==0)
        {
            b[index++]=i;
            for(j=i*3;j<=max;j+=i*2)
            {
                a[j]=1;
            }
        }
    }
    int flag;
    while(scanf("%lld",&n)==1)
    {
        for(i=0;i<index;i++)
        {
            temp=n-b[i];
            for(j=0;j<index;j++)
            {
                if(temp%b[j]==0&&temp!=b[j])
                {
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                c=b[i];
                d=temp;
                break;
            }
        }
        if(flag==1)
        {
            printf("%lld = %lld + %lld\n",n,c,d);
        }
    }
    return 0;
}
