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
    double i,j,k,t_case,n,p,result;
    while(scanf("%lf %lf",&n,&p)==2)
    {
        result=pow(p,1/n);
        printf("%.0lf\n",result);
    }
    return 0;
}

