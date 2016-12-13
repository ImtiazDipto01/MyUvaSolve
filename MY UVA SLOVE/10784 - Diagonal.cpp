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
    double i,j,k,t_case,d,r,temp2,n;
    long long int count=0,temp;
    while(cin>>d)
    {
        if(d==0)
        {
            break;
        }
        count++;
        n=ceil((3+sqrt(9+(8*d)))/2);
        printf("Case %lld: %0.0lf\n",count,n);
    }
    return 0;
}

