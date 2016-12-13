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
    int i,j,k,t_case,t_case2,n,low,high,a[1000],index;
    cin>>t_case;
    for(i=1;i<=t_case;i++)
    {
        cin>>t_case2;
        index=0;
        for(j=1;j<=t_case2;j++)
        {
            cin>>n;
            a[index++]=n;
        }
        high=0;
        low=0;
        for(k=0;k<index;k++)
        {
            if(k==(index-1))
            {
                break;
            }
            if(a[k]<a[k+1])
            {
                high++;
            }
            else if(a[k]>a[k+1])
            {
                low++;
            }

        }
        printf("Case %d: %d %d\n",i,high,low);
    }
    return 0;
}

