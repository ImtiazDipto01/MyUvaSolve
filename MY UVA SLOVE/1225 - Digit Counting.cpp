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
    int i,j,k,t_case,a[10],temp,n,rev;
    while(scanf("%d",&t_case)==1)
    {
        for(i=1;i<=t_case;i++)
        {
            cin >> n;
            memset(a,0,sizeof(a));
            for(j=1;j<=n;j++)
            {
                if(j==1)
                {
                    a[j]++;
                }
                if(j==2)
                {
                    a[j]++;
                }
                if(j==3)
                {
                    a[j]++;
                }
                if(j==4)
                {
                    a[j]++;
                }
                if(j==5)
                {
                    a[j]++;
                }
                if(j==6)
                {
                    a[j]++;
                }
                if(j==7)
                {
                    a[j]++;
                }
                if(j==8)
                {
                    a[j]++;
                }
                if(j==9)
                {
                    a[j]++;
                }
                if(j>9)
                {
                    temp=j;
                    while(temp!=0)
                    {
                        rev=temp%10;
                        if(rev==0)
                        {
                            a[rev]++;
                        }
                        if(rev==1)
                        {
                            a[rev]++;
                        }
                        if(rev==2)
                        {
                            a[rev]++;
                        }
                        if(rev==3)
                        {
                            a[rev]++;
                        }
                        if(rev==4)
                        {
                            a[rev]++;
                        }
                        if(rev==5)
                        {
                            a[rev]++;
                        }
                        if(rev==6)
                        {
                            a[rev]++;
                        }
                        if(rev==7)
                        {
                            a[rev]++;
                        }
                        if(rev==8)
                        {
                            a[rev]++;
                        }
                        if(rev==9)
                        {
                            a[rev]++;
                        }
                        temp=temp/10;
                    }
                }

            }
            for(k=0;k<=9;k++)
            {
                printf("%d",a[k]);
                if(k!=9)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

