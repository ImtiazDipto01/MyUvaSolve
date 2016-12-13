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
    int i,j,k,t_case,c,c1,count,max,count2,temp;
    while(scanf("%d %d",&c,&c1)==2)
    {
        count=-1;
        count2=-1;
        max=0;
        if(c==-1&&c1==-1)
        {
            break;
        }
        if(c>c1)
        {
            temp=c;
            c=c1;
            c1=temp;
        }
        for(i=c;i<=c1;i++)
        {
            count++;
        }
        for(i=c1;;i++)
        {
            count2++;
            if(i==c)
            {
                break;
            }
            else if(i==99)
            {
                i=-1;
            }
        }
        if(count<=count2)
        {
            printf("%d\n",count);
        }
        else if(count2<count)
        {
            printf("%d\n",count2);
        }
    }
    return 0;
}

