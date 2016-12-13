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
    int i,j,k,t_case,len,index,count,flag;
    char s[100000],d[10000];
    while(gets(s))
    {
        len=strlen(s);
        index=0;
        count=0;
        flag=0;
        for(i=0;i<len;i++)
        {
            if(s[i]!=' ')
            {
                d[index++]=s[i];
                flag=0;
            }
            if(s[i]==' ')
            {
                flag=1;
                count++;
            }
            if(flag==1||i==(len-1))
            {
                if(index!=0)
                {
                    for(j=index-1;j>=0;j--)
                    {
                        printf("%c",d[j]);
                    }
                }
                for(k=1;k<=count;k++)
                {
                    printf(" ");
                }
                index=0;
                flag=0;
                count=0;
            }
        }
        printf("\n");
    }
    return 0;
}

