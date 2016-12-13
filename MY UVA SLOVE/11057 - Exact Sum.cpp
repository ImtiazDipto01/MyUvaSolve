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

ll arr[10005] ;

int main()
{
    ll i,j,k,t_case,n,m,a,b ;
    while(cin >> n)
    {
        for(i = 0 ; i < n ; i++)
        {
            cin >> arr[i] ;
        }
        cin >> m ;
        sort(arr , arr + n) ;
        a = b = 0 ;
        ll mn = 10000000 , dif = 0 ;
        for(i = 0 ; i < n ; i++)
        {
            ll tmp = m - arr[i] ;
            ll high, low, mid ;
            mid = low = 0 ;
            high = n - 1 ;
            while(low <= high)
            {
                mid = ((low + high) / 2) ;
                if(arr[mid] == tmp && mid != i)
                {
                    dif = abs(arr[i] - tmp) ;
                    if(dif < mn)
                    {
                        mn = dif ;
                        a = min(tmp , arr[i]) ;
                        b = max(tmp , arr[i]) ;
                    }
                    break ;
                }
                else if(arr[mid] < tmp)
                {
                    low = mid + 1 ;
                }
                else if(arr[mid] > high)
                {
                    high = mid - 1 ;
                }
            }
        }
        pf("Peter should buy books whose prices are %lld and %lld.\n\n", a ,b) ;
    }
    return 0;
}

