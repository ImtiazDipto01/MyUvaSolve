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

int main()
{
    long long int i,j,k,t_case,n,sum,fib,first,second;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;

        first=second=1;
        for(i=1;i<=n;i++)
        {
            if(i==1)
                fib=1;

            else
            {
                fib=first+second;
                first=second;
                second=fib;
            }
        }
        printf("%lld\n",fib);
    }
    return 0;
}
