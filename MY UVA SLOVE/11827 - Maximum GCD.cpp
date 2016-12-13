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

int a[10000],b[10000];

int gcd(int a,int b)
{
    while(b!=0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}


int main()
{
    int i,j,k,m,t_case,len,index,index2,index3,x,y,max,r;
    char s[10000],d[10000];
    string p;
    cin>>t_case;
    gets(s);
    for(i=1;i<=t_case;i++)
    {
        gets(s);
        len=strlen(s);
        index=0;
        index2=0;
        index3=0;
        for(j=0;j<len;j++)
        {
            int sum=s[j];
            if(sum>=48&&sum<=57)
            {
                p[index++]=s[j];
            }
            if(sum==32&&index!=0||index>0&&j==(len-1))
            {

                p[index++]='\0';
                int temp=atoi(p.c_str());
                a[index2++]=temp;
                index=0;
            }
        }
        max=0;
        r=0;
        for(k=0;k<index2;k++)
        {
            for(m=0;m<index2;m++)
            {
                x = a[k];
                y = a[m];
                if(x!=y&&x!=0&&y!=0)
                {
                    r = gcd(x,y);

                    if(r > max)
                        max = r;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}

