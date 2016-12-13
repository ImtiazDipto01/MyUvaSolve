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
#define size 10000000

using namespace std;

long long int a[size];

int main()
{
    long long int i,j,k,t_case,index,temp,count,sum,len,temp2,flag;
    char s[100000];
    while(scanf("%s",&s)==1)
    {
        len=0;
        if(s[0]=='0'&&s[1]=='\0')
        {
            break;
        }
        len=strlen(s);
        index=0;
        temp2=0;
        for(j=0;j<len;j++)
        {
            temp2=s[j];
            if(temp2>=48&&temp2<=57)
            {
                a[index++]=temp2-48;
            }
        }
        sum=0;
        temp=0;
        for(i=0;i<index;i++)
        {
            temp=pow(2,len);
            temp=temp-1;
            sum=(sum+(a[i]*temp));
            len--;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
