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
    int i,j,k,t_case,count=0;
    double a,b,c,r,r1,temp;
    while(1)
    {
        scanf("%d",&t_case);
        if(t_case==0)
        {
            break;
        }
        count++;
        scanf("%lf %lf %lf",&a,&b,&c);
        if(t_case==1)
        {
            r=((b-a)/c);
            r1=((a*c)+(0.5*r*(c*c)));
            printf("Case %d: %.3lf %.3lf\n",count,r1,r);
        }
        else if(t_case==2)
        {
            r=((b-a)/c);
            r1=((a*r)+(0.5*c*(r*r)));
            printf("Case %d: %.3lf %.3lf\n",count,r1,r);
        }
        else if(t_case==3)
        {
            temp=((a*a)+(2*b*c));
            r=sqrt(temp);
            r1=((r-a)/b);
            printf("Case %d: %.3lf %.3lf\n",count,r,r1);
        }
        else if(t_case==4)
        {
            temp=((a*a)-(2*b*c));
            r=sqrt(temp);
            r1=((a-r)/b);
            printf("Case %d: %.3lf %.3lf\n",count,r,r1);
        }
    }
    return 0;
}
