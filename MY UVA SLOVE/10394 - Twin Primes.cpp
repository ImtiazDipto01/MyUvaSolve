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
#define size 30000000

using namespace std;

long long int a[size],c[size],d[size];

int main()
{
    long long int i,j,k,t_case,index2=1,index3=1,max=20000000,temp,temp2,sum,n;
    temp=2;
    a[1]=1;
    for(i=3;i<=max;i+=2)
    {
        if(a[i]==0)
        {
            temp2=i;
            sum=temp2-2;
            if(a[sum]==0)
            {
                c[index2++]=temp;
                d[index3++]=i;
            }
            temp = i;
            for(j=i*3;j<=max;j+=i*2)
            {
                a[j]=1;
            }
        }
    }
    while(scanf("%lld",&n)==1)
    {
        printf("(%lld, %lld)\n",c[n],d[n]);
    }
    return 0;
}

