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
#include <set>

using namespace std;

#define SZ 1000000
#define pb push_back
#define mp make_pair
#define fs first
#define sd second
#define sz size
#define pf printf
#define sc scanf
#define sqr(x) ((x)*(x))
#define cube(x) ((x)*(x)*(x))
#define all(x) x.begin() , x.end()

typedef long long ll ;
typedef long double ld ; // %Lf
typedef unsigned long long ull ; // %llu

const double pi = acos(-1) ;

ll prime_marking[SZ],prime_collection[SZ],fib[93] ;

void prime()
{
    ll i,j,k, index = 0 ;
    prime_marking[2] = 2 ;
    prime_collection[index++] = 2 ;
    for(i = 3 ; i <= SZ ; i+=2) //i*i will be more faster
    {
        if(prime_marking[i] == 0)
        {
            prime_marking[i] = 2 ;
            prime_collection[index++] = i ;
            for(j = i * 3 ; j <= SZ ; j += i * 2)
            {
                prime_marking[j] = 1 ;
            }
        }
    }
}

void fibonacci()
{
    ll i,j,k ;
    fib[0] = 0 ;
    fib[1] = 1 ;
    for(i = 2 ; i <= 92 ; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2] ;
    }
}

ll arr[100002] ;

int main()
{
    ll i,j,k,t_case,mx_range,sum,start,len,flag = 0,tmp ;
    while(sc("%lld %lld",&t_case,&mx_range) == 2)
    {
        sum = 0 , start = 0,len = 1000000,flag = 0 ;
        for(i  = 0 ; i < t_case ; i++)
        {
            sc("%lld",&arr[i]) ;
        }
        for(i = 0 ; i < t_case ; i++)
        {
            sum += arr[i] ;
            if(sum >= mx_range)
            {
                for(j = start ; j < i ; j++)
                {
                    sum -= arr[j] ;
                    if(sum <= mx_range)
                    {
                        tmp = (i - j + 1) ;
                        if(tmp < len)
                        {
                            len = tmp ;
                        }
                        start = j + 1 ;
                        break ;
                    }
                }
            }
        }
        if(len == 1000000)
        {
            pf("0\n") ;
        }
        else
        {
            if(len < 0)
                len = len * (-1) ;

            pf("%lld\n",len) ;
        }
    }
    return 0;
}
