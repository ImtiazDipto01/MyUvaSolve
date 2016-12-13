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


ll arr[130] ;

int main()
{
    int i,j,k,t_case,t_case2,tmp,tmp2,flag ;
    char input[1000002] ;
    char a , b ;
    sc("%d",&t_case) ;
    for(i = 1 ; i <= t_case ; i++)
    {
        sc("%s",&input) ;
        sc("%d",&t_case2) ;
        memset(arr , 0 , sizeof(arr)) ;
        flag = 0 ;
        for(j = 1 ; j <= t_case2 ; j++)
        {
            cin >> a >> b ;
            if(arr[b] == 0)
            {
                arr[b] = a ;
            }
            for(k = 65 ; k <= 90 ; k++)
            {
                if(arr[k] == b)
                {
                    arr[k] = a ;
                }
            }
        }
        int len = strlen(input) ;
        for(j = 0 ; j < len ; j++)
        {
            tmp = input[j] ;
            if(arr[tmp] >= 65)
            {
                input[j] = arr[tmp] ;
            }
        }
        pf("%s\n",input) ;
    }
    return 0;
}
