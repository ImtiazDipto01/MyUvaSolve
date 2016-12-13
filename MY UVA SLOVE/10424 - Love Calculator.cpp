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


int LOVE_CALCULATOR(int len,char *d)
{
    int i,rem,sum,temp3,value,sum2;
    len=strlen(d);
    sum=0;

    for(i=0;i<len;i++)
    {
        temp3=d[i];
        if(temp3>=65&&temp3<=90)
        {
            value=((temp3-65)+1);
            sum=sum+value;
        }
        else if(temp3>=97&&temp3<=122)
        {
            value=((temp3-97)+1);
            sum=sum+value;
        }
    }

    sum=sum%9;
    if(sum==0)
        sum=9;

    return sum;

}



int main()
{
    int i,j,k,t_case,temp,temp2,l;
    double result,r,v,v2;
    char a[100],b[100];
    while(gets(a))
    {
        gets(b);
        v=LOVE_CALCULATOR(l,a);
        v2=LOVE_CALCULATOR(l,b);


        if(v2>=v)
        {
             r=(v/v2)*100.00;
             printf("%.2lf %%\n",r);
        }
        else if(v>=v2)
        {
             r=(v2/v)*100.00;
             printf("%.2lf %%\n",r);
        }
    }
    return 0;
}
