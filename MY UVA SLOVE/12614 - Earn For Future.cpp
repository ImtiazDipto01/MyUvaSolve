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
    long long int i,j,k,t_case,n,max,input;
    scanf("%lld",&t_case);
    for(i=1;i<=t_case;i++)
    {
        scanf("%lld",&n);
        max=0;
        for(j=1;j<=n;j++)
        {
            scanf("%lld",&input);
            if(max<input)
            {
                max=input;
            }
        }
        printf("Case %lld: %lld\n",i,max);
    }
    return 0;
}
