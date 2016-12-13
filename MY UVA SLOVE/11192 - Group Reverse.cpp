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
    int i,j,k,t_case,gp,len,sum,temp;
    string s,s1;
    while(1)
    {
        cin>>gp;
        if(gp==0)
            break;
        cin>>s;
        len=s.length();
        int a=len/gp;
        sum=a;
        temp=0;
        for(i=1;i<=gp;i++)
        {
            for(j=a-1;j>=temp;j--)
            {
                cout<<s[j];
            }
            a=a+sum;
            temp=temp+sum;
        }
        cout<<endl;
    }
    return 0;
}
