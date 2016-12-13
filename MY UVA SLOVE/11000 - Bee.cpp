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


using namespace std;

long int a[100000];

int main()
{
    long int i,j,k,t_case,input,fib,first,second,male,all,sum;
    while(scanf("%ld",&input)==1)
    {
        if(input<0)
            break;

        first=second=1;

        sum=0;
        for(i=0;i<=input;i++)
        {
            if(i==0||i==1)
            {
                fib=1;
                sum=sum+fib;
                if((input-1)==i)
                {
                    a[i]=sum;
                }
            }
            else
            {
                fib=first+second;
                sum=sum+fib;
                first=second;
                second=fib;
                if((input-1)==i)
                {
                    a[i]=sum;
                }
            }
        }
        if(input==0)
        {
            printf("0 1\n");
        }
        if(input>0)
        {
            printf("%ld %ld\n",a[input-1],sum);
        }
    }
    return 0;
}
