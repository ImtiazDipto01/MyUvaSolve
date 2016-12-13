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
    double i,j,k,t_case,ans2,r,H,M,ans,r1;
    while(scanf("%lf:%lf",&H,&M)==2)
    {
        if(H==00&&M==00)
        {
            break;
        }
        r=H*60;
        r1=M*11;
        if(r>=r1)
        {
            ans=(0.5*(r-r1));
        }
        else if(r<=r1)
        {
            ans=(0.5*(r1-r));
        }
        if(ans>180)
        {
            ans=360-ans;
        }
        printf("%0.3lf\n",ans);
    }
    return 0;
}

