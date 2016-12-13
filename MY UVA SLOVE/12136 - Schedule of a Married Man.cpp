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
    int i,j,k,t_case,H,M,H1,M1,h,m,h1,m1,flag;
    cin>>t_case;
    for(i=1;i<=t_case;i++)
    {
        scanf("%d:%d",&H,&M);
        scanf("%d:%d",&H1,&M1);
        scanf("%d:%d",&h,&m);
        scanf("%d:%d",&h1,&m1);
        flag=1;
        h=((h*100)+m);
        H=((H*100)+M);
        h1=((h1*100)+m1);
        H1=((H1*100)+M1);
        for(j=H;j<=H1;j++)
        {
            for(k=h;k<=h1;k++)
            {
                if(j==k)
                {
                    flag=0;
                    printf("Case %d: Mrs Meeting\n",i);
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("Case %d: Hits Meeting\n",i);
        }
    }
    return 0;
}
