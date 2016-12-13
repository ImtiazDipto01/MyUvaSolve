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
    long long int i,j,k,t_case,a,b,x,y,temp,gcd,lcm;
    scanf("%lld",&t_case);
    for(i=1;i<=t_case;i++)
    {
        scanf("%lld %lld",&a,&b);
        x=a;
        y=b;
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
        gcd=a;
        lcm=((x*y)/gcd);
        if(gcd==x&&lcm==y)
        {
            printf("%lld %lld\n",gcd,lcm);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}

