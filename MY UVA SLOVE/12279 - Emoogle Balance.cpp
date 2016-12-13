#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int party,party_no,t_count=0,count;
    while(scanf("%d",&party)==1)
    {
        if(party==0)
        {
            break;
        }
        t_count++;
        count=0;
        for(int i=1;i<=party;i++)
        {
            scanf("%d",&party_no);
            if(party_no>0)
            {
                count++;
            }
            else if(party_no==0)
            {
                count--;
            }
        }
        printf("Case %d: %d\n",t_count,count);
    }
    return 0;
}

