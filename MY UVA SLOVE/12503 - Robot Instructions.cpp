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
    int i,j,k,t_case,t2,temp,index,r,R,a[1000],n,len;
    string s,d;
    cin>>t_case;
    cin.ignore();
    for(i=1;i<=t_case;i++)
    {
        cin>>t2;
        index=0;
        for(j=1;j<=t2;j++)
        {
            cin>>s;
            if(s=="SAME")
            {
                cin>>d;
                cin>>n;
                a[index++]=n;
            }
            if(s=="RIGHT")
            {
                a[index++]=-1;
            }
            if(s=="LEFT")
            {
                a[index++]=-2;
            }

        }
        r=0;
        for(k=0;k<index;k++)
        {
            temp=a[k];
            if(temp==-2)
            {
                r=r-1;
            }
            else if(temp==-1)
            {
                r=r+1;
            }
            else
            {
                while(1)
                {
                    if(temp==-1)
                    {
                        r=r+1;
                        break;
                    }
                    else if(temp==-2)
                    {
                        r=r-1;
                        break;
                    }
                    else
                    {
                        temp=a[temp-1];
                    }
                }
            }
        }
        printf("%d\n",r);
    }
    return 0;
}

