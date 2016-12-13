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

int a[1000];

int main()
{
    int i,j,k,t_case,t,n,index,sum,flag,temp,temp2;
    while(cin >> t_case)
    {
        if(t_case==0)
        {
            break;
        }
        index=0;
        for(i=1;i<=t_case;i++)
        {
            cin>>n;
            a[index++]=n;
        }
        if(a[index-1]!=1422)
        {
            a[index++]=1422;
        }
        sort(a,a+index);
        sum=0;
        for(i=0;i<index;i++)
        {
            if(i!=index-1)
            {
                temp=a[i+1]-a[i];
            }
            if(temp<=200)
            {
                flag=1;
            }
            if(temp>200)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            temp=200-temp;
            temp2=a[index-1]-a[index-2];
            if(temp>=temp2)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            printf("POSSIBLE\n");
        }
        else if(flag==0)
        {
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
