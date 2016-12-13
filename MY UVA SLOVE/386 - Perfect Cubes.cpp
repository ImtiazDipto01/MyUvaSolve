#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <cctype>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <sstream>
#include <utility>

using namespace std;

long long int ar1[202] , ar2[202] , ar3[202] ;

int main()
{
    long long int i,j,k,t_case,n,sum,flag,N;
    n = 6 ;
    long long int tmp1,tmp2,tmp3 ;
    while(n != 201)
    {
        sum = 0 ;
        flag = 0 ;
        N = n*n*n ;
        for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
            {
                for(k = 1 ; k <= n ; k++)
                {
                    sum = 0 ;
                    tmp1 = i*i*i ;
                    tmp2 = j*j*j ;
                    tmp3 = k*k*k ;
                    sum = tmp1 + tmp2 + tmp3 ;
                    if(sum == N && (ar1[i] == 0 || ar2[j] == 0 || ar3[k] == 0) && (i > 1 && j > 1 && k > 1))
                    {
                        printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n",n,i,j,k) ;
                        ar1[i] = 1 ;
                        ar2[i] = 1 ;
                        ar3[i] = 1 ;
                        ar2[j] = 1 ;
                        ar1[j] = 1 ;
                        ar3[j] = 1 ;
                        ar3[k] = 1 ;
                        ar2[k] = 1 ;
                        ar1[k] = 1 ;
                        break ;
                    }
                }
            }
        }
        n ++ ;
        memset(ar1 , 0 ,sizeof(ar1)) ;
        memset(ar2 , 0 ,sizeof(ar2)) ;
        memset(ar3 , 0 ,sizeof(ar3)) ;
    }
    return 0;
}

