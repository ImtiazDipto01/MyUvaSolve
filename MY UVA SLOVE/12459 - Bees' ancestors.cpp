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
    long long int i,j,k,t_case,input,fib,first,second;
    while(scanf("%lld",&input)==1)
    {
        if(input == 0)
        {
            break;
        }

        fib = 0;
        first = second = 1;

        for(i = 1; i <= input; i++)
        {
            if(i == 1)
                fib = 1;

            else
            {
                fib = first + second ;
                first = second ;
                second = fib ;
            }
        }

        printf("%lld\n",fib);
    }
    return 0;
}
