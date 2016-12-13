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
    long int i,j,k,t_case,y,y1,y2,d,d1,d2,m,m1,m2,count=0;
    string n,n1,n2;
    cin>>t_case;
    while(cin>>n)
    {
        cin>>d>>m>>y;
        count++;
        if(count==1)
        {
            n1=n;
            n2=n;
            d1=d;
            d2=d;
            m1=m;
            m2=m;
            y1=y;
            y2=y;
        }
        if(count>1)
        {
            if(y1<y)
            {
                n1=n;
                y1=y;
                m1=m;
                d1=d;
            }
            else if(y1==y)
            {
                if(m1<m)
                {
                    n1=n;
                    y1=y;
                    m1=m;
                    d1=d;
                }
                else if(m1==m)
                {
                    if(d1>d)
                    {
                        n1=n;
                        y1=y;
                        m1=m;
                        d1=d;
                    }
                }
            }
            if(y2>y)
            {
                n2=n;
                d2=d;
                y2=y;
                m2=m;
            }
            else if(y2==y)
            {
                if(m2>m)
                {
                    y2=y;
                    m2=m;
                    n2=n;
                    d2=d;
                }
                else if(m2==m)
                {
                    if(d2>d)
                    {
                        n2=n;
                        y2=y;
                        m2=m;
                        d2=d;
                    }
                }
            }
        }
        if(count==t_case)
        {
            cout<<n1<<endl;
            cout<<n2<<endl;
            break;
        }
    }
    return 0;
}
