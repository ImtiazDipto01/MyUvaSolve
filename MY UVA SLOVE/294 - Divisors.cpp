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

int a[size],b[size],c[size];

int main()
{
    long long int i,j,k,t_case,l,m,max,r,num,sum,index2,index=0,count,check,p;
    scanf("%lld",&t_case);
    for(i=1;i<=31622;i++)
    {
        a[i]=0;
    }
    for(i=4;i<=31622;i+=2)
    {
        a[i]=1;
    }
    b[index++]=2;
    for(i=3;i<=31622;i+=2)
    {
        if(a[i]==0)
        {
            b[index++]=i;
            for(j=i*2;j<=31622;j+=i)
            {
                a[j]=1;
            }
        }
    }

    for(i=1;i<=t_case;i++)
    {
        scanf("%lld %lld",&l,&m);

        count=0;

        max=0;
        for(j=l;j<=m;j++)
        {
             p=j;
             sum=1;
             for(k=0;k<index;k++)
             {
                 count=0;
                 if(k>3400)
                 {
                     break;
                 }
                 while(p%b[k]==0)
                 {
                     p=p/b[k];
                     count++;
                 }
                 sum=sum*(count+1);
             }
             if(max<sum)
             {
                max=sum;
                num=j;

             }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,m,num,max);
    }
    return 0;
}
