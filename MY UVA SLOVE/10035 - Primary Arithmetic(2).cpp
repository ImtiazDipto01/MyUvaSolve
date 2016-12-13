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
    long long int i,j,k,t_case,c,d,temp,temp2,temp3,a[1000],b[1000],rev,rev1,index,index2,count,sum;
    while(cin >> c >> d)
    {
        if(c==0&&d==0)
        {
            break;
        }
        temp=c;
        temp2=d;
        index=0;
        index2=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        if(temp==0)
        {
            a[index++]=temp;
        }
        while(temp!=0)
        {
            rev=temp%10;
            a[index++]=rev;
            temp=temp/10;
        }
        if(temp2==0)
        {
            b[index2++]=temp;
        }
        while(temp2!=0)
        {
            rev1=temp2%10;
            b[index2++]=rev1;
            temp2=temp2/10;
        }
        count=0;
        sum=0;
        if(index>=index2)
        {
            for(i=0;i<index;i++)
            {
                temp3=a[i]+b[i]+sum;
                if(temp3>9)
                {
                    sum=1;
                }
                else if(temp3<=9)
                {
                    sum=0;
                }
                if(sum==1)
                {
                    count++;
                }
            }
        }
        else if(index2>=index)
        {
            for(i=0;i<index2;i++)
            {
                temp3=a[i]+b[i]+sum;
                if(temp3>9)
                {
                    sum=1;
                }
                else if(temp3<=9)
                {
                    sum=0;
                }
                if(sum==1)
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("%lld carry operation.\n",count);
        }
        else if(count>1)
        {
            printf("%lld carry operations.\n",count);
        }
    }
    return 0;
}
