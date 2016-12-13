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
    long long int i,j,k,t_case,input,a,b,c,d;
    cin>>t_case;
    for(i=1;i<=t_case;i++)
    {
        cin>>input;
        a=(input*(input-1));
        b=a/4;
        c=b*4;
        d=a/2;
        if(c==a)
        {
            printf("Case %lld: %lld\n",i,b);
        }
        else
        {
            printf("Case %lld: %lld/2\n",i,d);
        }
    }
    return 0;
}
