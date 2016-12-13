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
    int i,j,k,t_case,input,a[1000],index,h,l,g,H,L,temp;
    h=l=index=0;
    string s;
    while(1)
    {
        cin>>input;
        if(input==0)
        {
            break;
        }
        g=1;
        a[index++]=input;
        cin.ignore();
        getline(cin,s);
        if(s=="too high")
        {
            h++;
        }
        else if(s=="too low")
        {
            l++;
        }
        else if(s=="right on")
        {
            temp=input;
            g++;
        }
        if(g>1)
        {
            H=L=0;
            for(i=0;i<index-1;i++)
            {
                if(temp>a[i])
                {
                    L++;
                }
                else if(temp<a[i])
                {
                    H++;
                }
            }
            if(h==H&&l==L)
            {
                printf("Stan may be honest\n");
            }
            else
            {
                printf("Stan is dishonest\n");
            }
            h=l=index=0;
        }
    }
    return 0;
}
