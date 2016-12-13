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
    double i,j,k,t_case,r,n,temp,result;
    while(scanf("%lf %lf",&r,&n)==2)
    {
        temp=acos(-1);
        result=((n*(r*r))/2)*sin((2*temp)/n);
        printf("%.3lf\n",result);
    }
    return 0;
}
