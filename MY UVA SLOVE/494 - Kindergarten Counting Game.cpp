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
    long int i,j,k,t_case,count,flag,len,temp,sum;
    char s[100000];
    while(gets(s))
    {
        len=strlen(s);
        count=0;
        sum=0;
        flag=0;
        for(i=0;i<len;i++)
        {
            temp=s[i];
            if(temp>=65&&temp<=90||temp>=97&&temp<=122)
            {
                count++;
                flag=0;
            }
            else
            {
                flag=1;
            }
            if(flag==1||i==(len-1))
            {
                if(count!=0)
                {
                    sum++;
                    count=0;
                }
                flag=0;
            }
        }
        printf("%ld\n",sum);
    }
    return 0;
}

