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
    int i,j,k,t_case,t1,t2,f,att,a,b,c,result,avg,temp,temp2;
    cin>>t_case;
    for(i=1;i<=t_case;i++)
    {
        result=0;
        cin>>t1>>t2>>f>>att>>a>>b>>c;
        result=(t1+t2+f+att);
        if(a>=b&&a>=c)
        {
            temp=a;
        }
        else if(b>=a&&b>=c)
        {
            temp=b;
        }
        else if(c>=a&&c>=b)
        {
            temp=c;
        }
        if(temp==a)
        {
            if(b>=c)
            {
                temp2=b;
            }
            else if(b<=c)
            {
                temp2=c;
            }
        }
        else if(temp==b)
        {
            if(a>=c)
            {
                temp2=a;
            }
            else if(a<=c)
            {
                temp2=c;
            }
        }
        else if(temp==c)
        {
            if(b>=a)
            {
                temp2=b;
            }
            else if(b<=a)
            {
                temp2=a;
            }
        }
        avg=((temp+temp2)/2);
        result=(result+avg);
        if(result>=90)
        {
            printf("Case %d: A\n",i);
        }
        else if(result>=80&&result<90)
        {
            printf("Case %d: B\n",i);
        }
        else if(result>=70&&result<80)
        {
            printf("Case %d: C\n",i);
        }
        else if(result>=60&&result<70)
        {
            printf("Case %d: D\n",i);
        }
        else if(result<60)
        {
            printf("Case %d: F\n",i);
        }
    }
    return 0;
}
