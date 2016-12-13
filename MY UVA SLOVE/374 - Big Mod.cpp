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
#define SIZE 1000

using namespace std;

long long int bainary[SIZE] ;

int main()
{
    long long int i,j,k,t_case,b,p,n,ans,tmp,index,rem ;
    while(cin >> b >> p >> n)
    {
        ans = 1 ;
        tmp = p ;
        bainary[SIZE] = {0} ;
        index = 0 ;
        while(tmp != 0)
        {
            rem = tmp % 2 ;
            bainary[index++] = rem ;
            tmp = tmp / 2 ;
        }
        reverse(bainary , bainary + index) ;
        for(i = 0 ; i < index ; i++)
        {
            ans = ((ans*ans) % n) ;
            if(bainary[i] == 1)
            {
                ans = ((ans*b) % n) ;
            }
        }
        cout << ans << endl ;
    }
    return 0;
}
