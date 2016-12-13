#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,t,temp,count_b,count_w,count_a,match,len,count_t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>match;
        char d[match-1];
        scanf("%s",&d);
        len=strlen(d);
        count_b=0;
        count_a=0;
        count_w=0;
        count_t=0;
        for(int j=0;j<len;j++)
        {
            temp=d[j];
            if(temp==66)
            {
                count_b++;
            }
            if(temp==87)
            {
                count_w++;
            }
            if(temp==84)
            {
                count_t++;
            }
            if(temp==65)
            {
                count_a++;
            }
        }

        if(match==count_b)
        {
            printf("Case %d: BANGLAWASH\n",i);
        }
        else if(match==count_w)
        {
            printf("Case %d: WHITEWASH\n",i);
        }
        else if(count_a>0&&count_b>0&&count_w==0&&count_t==0)
        {
            printf("Case %d: BANGLAWASH\n",i);
        }
        else if(count_a>0&&count_w>0&&count_b==0&&count_t==0)
        {
            printf("Case %d: WHITEWASH\n",i);
        }
        else if(match==count_a)
        {
            printf("Case %d: ABANDONED\n",i);
        }
        else if(count_b>count_w)
        {
            printf("Case %d: BANGLADESH %d - %d\n",i,count_b,count_w);
        }
        else if(count_w>count_b)
        {
            printf("Case %d: WWW %d - %d\n",i,count_w,count_b);
        }
        else if(count_b>0&&count_w>0&&count_b==count_w)
        {
            printf("Case %d: DRAW %d %d\n",i,count_b,count_t);
        }
        else if(match==count_t||count_t>0&&count_b==0&&count_w==0&&count_a>0)
        {
            printf("Case %d: DRAW %d %d\n",i,count_b,count_t);
        }
    }
    return 0;
}
