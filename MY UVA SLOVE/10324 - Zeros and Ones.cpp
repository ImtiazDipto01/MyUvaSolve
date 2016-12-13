#include<iostream>
#include<stdio.h>
#include<string.h>
#define size 1000000
using namespace std;

char s[size];

int main()
{
    int i,t,p1,p2,check,count=0,j,check2,temp,temp2;
    while(scanf("%s",&s)==1)
    {
        check=0;
        count++;
        cin>>t;
        printf("Case %d:\n",count);
        for(i=1;i<=t;i++)
        {
            cin>>p1>>p2;
            if(p1>p2)
            {
                temp2 = p1;
                p1=p2;
                p2=temp2;
            }
            temp=p2;
            for(j=p1;j<=p2;j++)
            {
                if(j==temp)
                {
                   check=1;
                   break;
                }

                if(s[j]==s[j+1])
                {
                    if(s[temp]==s[temp-1])
                    {
                        check=1;
                        temp--;
                    }
                    else
                    {
                        check=0;
                        break;
                    }
                }
                else if(s[j]!=s[j+1])
                {
                    check=0;
                    break;
                }
                if(j==temp)
                {
                    check=1;
                    break;
                }

            }
            if(check==1)
            {
                printf("Yes\n");
            }
            else if(check==0)
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
