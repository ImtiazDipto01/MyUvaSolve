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
#define  size 100000

using namespace std;

int a[size],b[size],c[size];

int main()
{
    int i,j,k,t_case,t_case_count=0,index=0,len,temp,count,flag;
    char s[10000];
    b[index++]=2;
    for(i=3;i*i<=2001;i++)
    {
        if(a[i]==0)
        {
            b[index++]=i;
            for(j=i*3;j<=2001;j+=i*2)
            {
                a[j]=1;
            }
        }
    }
    cin>>t_case;
    while(scanf("%s",&s)==1)
    {
        t_case_count++;
        len=strlen(s);
        temp=0;
        int temp2=0;
        int index2=0;
        for(i=0;i<len;i++)
        {
            count=0;
            temp2=0;
            for(j=0;j<len;j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
                temp2=s[i];
            }
            for(k=0;k<index;k++)
            {
                if(count==1||count==0)
                {
                    flag=0;
                    break;
                }
                else if(count>1)
                {
                    if(count%b[k]==0&&count!=b[k])
                    {
                        flag=0;
                        break;
                    }
                    else
                    {
                        flag=1;
                    }
                }
            }
            if(flag==1)
            {
                c[index2++]=temp2;
            }
        }
        sort(c,c+index2);
        if(index2==0)
        {
            printf("Case %d: empty\n",t_case_count);
        }
        if(index2>0)
        {
            printf("Case %d: ",t_case_count);
            for(i=0;i<index2;i++)
            {
                if(i==0)
                {
                    printf("%c",c[i]);
                }
                else if(i>0)
                {
                    if(c[i]!=c[i-1])
                    {
                        printf("%c",c[i]);
                    }
                }
            }
            printf("\n");
        }
        if(t_case==t_case_count)
        {
            break;
        }
    }
    return 0;
}

