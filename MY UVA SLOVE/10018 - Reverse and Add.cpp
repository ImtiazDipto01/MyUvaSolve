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
    long long int i,j,k,t_case,input,rev,sum,count,temp,rev2,palingdrom;
    cin>>t_case;
    for(i=1;i<=t_case;i++)
    {
        cin>>input;
        count=0;
        while(input!=0)
        {
            temp=input;
            rev=0;
            sum=0;
            while(input!=0)
            {
               rev=rev*10;
               rev=rev+(input%10);
               input=input/10;
            }
            if(count>1)
            {
                if(temp==rev)
                {
                    palingdrom=temp;
                    break;
                }
            }
            sum=temp+rev;
            count++;
            temp=sum;
            rev2=0;
            while(sum!=0)
            {
                rev2=rev2*10;
                rev2=rev2+(sum%10);
                sum=sum/10;
            }
            if(rev2==temp)
            {
                palingdrom=temp;
                break;
            }
            else
            {
                input=rev2+temp;
                count++;
            }

        }
        printf("%lld %lld\n",count,palingdrom);
    }
    return 0;
}
