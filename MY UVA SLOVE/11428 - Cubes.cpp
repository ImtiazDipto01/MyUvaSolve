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
    long int i,j,k,t_case,input,r,t,ans,t1,flag;
    while(scanf("%ld",&input)==1)
    {
        if(input==0)
        {
            break;
        }
        r=input/3;
        for(i=2;i<=r;i++)
        {
            for(j=1;j<i;j++)
            {
                t=i;
                t1=j;
                ans=((t*t*t)-(t1*t1*t1));
                if(ans==input)
                {
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==0)
        {
            printf("%ld %ld\n",t,t1);
        }
        if(flag==1)
        {
            printf("No solution\n");
            flag=0;
        }
    }
    return 0;
}

