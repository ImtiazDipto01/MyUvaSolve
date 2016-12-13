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
vector<string> person ;
vector<string> song ;
int main()
{
    int i,j,k,t_case ;
    string str,s,tmp ;
    s = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you" ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        cin >> str ;
        person.pb(str) ;
    }
    stringstream ss(s) ;
    while(ss >> tmp)
    {
        song.pb(tmp) ;
    }
    int start = 0,count = 0 ;
    for(i = 0 ; i < person.sz() ; i++)
    {
        count ++ ;
        for(j = start ; j < song.sz() ; j++)
        {
            cout << person[i] << ": " << song[j] << endl ;
            start = j + 1 ;
            break ;
        }
        if(start <= (song.sz() - 1) && i == (person.sz() - 1))
        {
            i = -1 ;
        }
        if(start > (song.sz() - 1) && count < person.sz())
        {
            start = 0 ;
        }
    }
    return 0;
}
