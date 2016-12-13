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

int main()
{
    long int i,j,k,x,t_case,input,index,temp,count,index2,temp2,check;
    while(scanf("%ld",&t_case)==1)
    {
        index=0;
        for(i=1;i<=t_case;i++)
        {
            cin>>input;
            a[index++]=input;
        }
        index2=0;
        for(i=0;i<index;i++)
        {
            if(index==1)
            {
                b[index2++]=a[i];
                break;
            }
            else if(i==(index-1)&&index!=1)
            {
                break;
            }
            k=a[i]-a[i+1];
            temp=abs(k);
            if(temp<=(t_case-1)&&temp!=0)
            {
                b[index2++]=temp;
            }
        }
        sort(b,(b+index2));
        j=0;
        count=0;
        for(i=1;i<=(t_case-1);i++)
        {
            if(i==b[j])
            {
                count++;
                j++;
            }
        }
        if(count==(t_case-1))
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
    return 0;
}
