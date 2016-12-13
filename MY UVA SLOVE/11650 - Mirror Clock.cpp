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
    int i,j,k,t_case,H,M,h,m;
    char c;
    cin>>t_case;
    for(i=1;i<=t_case;i++)
    {
        scanf("%d:%d",&H,&M);
        if(M==00)
        {
            m=00;
        }
        if(M>0)
        {
            m=60-M;
        }
        if(m>0)
        {
            H=H+1;
            if(H>12)
            {
                h=12-H;
                h=12+h;
            }
            else if(12>=H)
            {
                h=12-H;
            }
        }
        else if(m==0)
        {
            h=12-H;
        }
        if(h==0)
        {
            h=12;
        }
        if(h<10&&m<10)
        {
            printf("0%d:0%d\n",h,m);
        }
        else if(h<10)
        {
            printf("0%d:%d\n",h,m);
        }
        else if(m<10)
        {
            printf("%d:0%d\n",h,m);
        }
        else if(h>=10&&m>=10)
        {
            printf("%d:%d\n",h,m);
        }
    }
    return 0;
}
