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
    int i,j,k,t_case,n,m,temp,rev,a[100000],flag,count,index;
    while(scanf("%d %d",&n,&m)==2)
    {
        count=0;
        for(i=n;i<=m;i++)
        {
            temp=i;
            index=0;
            while(temp!=0)
            {
                rev=temp%10;
                a[index++]=rev;
                temp=temp/10;
            }
            for(j=0;j<index;j++)
            {
                for(k=0;k<index;k++)
                {
                    if(j!=k)
                    {
                        if(a[j]==a[k])
                        {
                            flag=0;
                            break;
                        }
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
            if(flag==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
