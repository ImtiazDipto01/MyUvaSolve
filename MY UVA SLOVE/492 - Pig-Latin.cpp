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

vector <string> myv ;

int main()
{
    int i,j,k,t_case ;
    string str,s,tmp ;
    char c ;
    while(getline(cin , str))
    {
        int cnt = 0 , flag = 0 ;
        for(i = 0 ; i < str.sz() ; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            {
                if(flag == 0 && (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'))
                {
                    flag = 1 ;
                }
                if(flag == 1)
                {
                    cout << str[i] ;
                }
                if(flag == 0 && (str[i] != 'A' || str[i] != 'a' || str[i] != 'E' || str[i] != 'e' || str[i] != 'i' || str[i] != 'I' || str[i] != 'o' || str[i] != 'O' || str[i] != 'u' || str[i] != 'U'))
                {
                    flag = 2 ;
                }
                if(flag == 2)
                {
                    cnt ++ ;
                    if(cnt == 1)
                    {
                        c = str[i] ;
                    }
                    if(cnt > 1)
                    {
                        cout << str[i] ;
                    }
                }
                if(i == (str.sz() - 1))
                {
                    if(flag == 1)
                    {
                        cout << "ay" ;
                        flag = 0 ;
                    }
                    if(flag == 2)
                    {
                        cout << c << "ay" ;
                        flag = 0 ;
                    }
                }
            }
            else
            {
                if(flag == 1)
                {
                    cout << "ay" ;
                    cout << str[i] ;
                    flag = 0 ;
                }
                else if(flag == 2)
                {
                    cout << c << "ay" << str[i] ;
                    flag = 0 ;
                    cnt = 0 ;
                }
                else if(flag == 0)
                {
                    cout << str[i] ;
                }
            }
        }
        cout << endl ;
    }
    return 0;
}

