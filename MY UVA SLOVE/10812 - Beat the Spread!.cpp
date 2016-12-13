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
    long long int i,j,k,t_case,a,b,r,r1,R,R1;
    cin>>t_case;
    for(i=1;i<=t_case;i++)
    {
        cin>>a>>b;
        if(b>a)
        {
            printf("impossible\n");
        }
        else if(a>=b)
        {
            r=a+b;
            r1=r/2;
            j=a-b;
            k=j/2;

            if((r1*2)==r&&(k*2)==j)
            {
                R=((a+b)/2);
                R1=((a-b)/2);
                printf("%lld %lld\n",R,R1);
            }
            else
            {
                printf("impossible\n");
            }
        }
    }
    return 0;
}
