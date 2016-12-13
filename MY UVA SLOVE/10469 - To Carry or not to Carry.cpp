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
    long int i,j,k,t_case,a,b,sum;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        sum = a ^ b;
        printf("%ld\n",sum);
    }
    return 0;
}
