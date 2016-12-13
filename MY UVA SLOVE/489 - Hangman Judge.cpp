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
#define mem(arr , val) memset(arr , val , sizeof(arr))

typedef long long ll ;
typedef long double ld ; // %Lf
typedef unsigned long long ull ; // %llu

const double pi = acos(-1) ;

ll prime_marking[SZ],prime_collection[SZ],fib[93] ;

void prime()
{
    ll i,j,k,index = 0 ;
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

int arr[130], marking[130] ;

int main()
{
    int i,j,k,t_case,stoke ;
    string sol ,gs ;
    while(cin >> t_case)
    {
        if(t_case == -1)
            break ;

        mem(arr , 0) ;
        mem(marking , 0) ;
        stoke = 0 ;
        cin >> sol >> gs ;
        int len = sol.sz() ;
        int len2 = gs.sz() ;
        int gs_cnt = 0 ;
        for(i = 0 ; i < len ; i++)
        {
            arr[sol[i]] ++ ;
        }
        for(i = 0 ; i < len2 ; i++)
        {
            if(arr[gs[i]] == 0 && marking[gs[i]] == 0)
            {
                stoke ++ ;
                marking[gs[i]] = 1 ;
            }
            if(arr[gs[i]] > 0 && marking[gs[i]] == 0)
            {
                gs_cnt += arr[gs[i]] ;
                marking[gs[i]] = 1 ;
            }
            if(stoke == 7)
            {
                pf("Round %d\n",t_case) ;
                pf("You lose.\n") ;
                break ;
            }
            if(gs_cnt == len)
            {
                pf("Round %d\n",t_case) ;
                pf("You win.\n") ;
                break ;
            }
        }
        if(gs_cnt != len && stoke != 7)
        {
            pf("Round %d\n",t_case) ;
            pf("You chickened out.\n") ;
        }
    }
    return 0;
}
