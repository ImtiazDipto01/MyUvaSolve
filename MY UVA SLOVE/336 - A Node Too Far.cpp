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


vector <ll> myv[10000] ;
map <ll , ll> mark_node,visit ;
queue <ll> myq ;

ll reached_node = 0 ;

void bfs(ll src , ll ttl)
{
    visit.clear() ;
    while(!myq.empty())
    {
        myq.pop() ;
    }
    reached_node = 0 ;
    myq.push(src) ;
    visit[src] = 1 ;
    ll i,visit_node ;
    visit_node = src ;
    while(!myq.empty())
    {
        if(ttl == 0)
            break ;

        ll frnt = myq.front() ;
        ll tmp2 = mark_node[frnt] ;
        for(i = 0 ; i < myv[tmp2].sz() ; i++)
        {
            ll node = myv[tmp2][i] ;
            if(visit[node] == 0)
            {
                visit[node] = 1 ;
                myq.push(node) ;
                reached_node ++ ;
            }
        }
        if(visit_node == frnt)
        {
            ttl -- ;
            visit_node = myq.back() ;
        }
        myq.pop() ;
        if(ttl == 0)
            break ;

    }
}

int main()
{
    ll i,j,k,t_case = 0,edge,a,b,src,ttl ;
    while(cin >> edge)
    {
        if(edge == 0)
            break ;

        ll count = 0 ;
        mark_node.clear() ;
        for(i = 1 ; i <= edge ; i++)
        {
            cin >> a >> b ;
            if(mark_node[a] == 0)
            {
                count ++ ;
                mark_node[a] = count ;
            }
            if(mark_node[b] == 0)
            {
                count ++ ;
                mark_node[b] = count ;
            }
            ll tmp = mark_node[a] ;
            myv[tmp].pb(b) ;
            tmp = mark_node[b] ;
            myv[tmp].pb(a) ;
        }
        while(cin >> src >> ttl)
        {
            if(src == 0 && ttl == 0)
                break ;

            t_case ++ ;
            ll ans = 0 ;
            if(mark_node[src] == 0)
            {
                pf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",t_case , count , src , ttl) ;
            }
            else
            {
                bfs(src , ttl) ;
                ans = ((count - 1) - reached_node) ;
                pf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",t_case ,ans , src , ttl) ;
            }
        }
        for(i = 0 ; i <= 10000 ; i++)
        {
            myv[i].clear() ;
        }
    }
    return 0;
}

