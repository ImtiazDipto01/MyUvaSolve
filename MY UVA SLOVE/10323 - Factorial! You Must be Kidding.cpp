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
    long long int i,j,k,t_case,fact,n;
    while(scanf("%lld",&n) == 1)
    {
        fact = 1 ;
        if(n < 0)
        {
            n = (n * (-1)) ;
            if(n % 2 == 0)
            {
                printf("Underflow!\n") ;
            }
            else
            {
                printf("Overflow!\n") ;
            }
        }
        else if(n >=0 && n <= 7)
        {
            printf("Underflow!\n") ;
        }
        else if(n > 7 && n <= 13)
        {
           for(i = 1 ; i <= n ; i++)
           {
               fact = fact * i ;
           }
           printf("%lld\n",fact) ;
        }
        else if(n > 13)
        {
            printf("Overflow!\n") ;
        }
    }
    return 0;
}
