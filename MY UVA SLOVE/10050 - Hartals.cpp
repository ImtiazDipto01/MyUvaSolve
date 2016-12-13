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
#define size 37000

using namespace std;

int days[size] ;

int main()
{
    int i,j,k,t_case,wrk_days,p,hrtl,friday,saturday,tmp,lose_days;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        cin >> wrk_days >> p ;
        memset(days , 0 , sizeof(days)) ;
        friday = 6 ;
        saturday = 0 ;
        days[6] = 2 ;
        for(k = 1 ; saturday <= wrk_days ; k++)
        {
            friday = friday + 7 ;
            saturday = friday + 1 ;
            days[friday] = 2 ;
            days[saturday] = 2 ;
        }
        lose_days = 0 ;
        for(j = 1 ; j <= p ; j++)
        {
            cin >> hrtl ;
            tmp = 0 ;
            for(k = 1 ; tmp <= wrk_days ; k++)
            {
                tmp = tmp + hrtl ;
                if(days[tmp] != 1 && days[tmp] != 2 && tmp <= wrk_days)
                {
                    days[tmp] = 1 ;
                    lose_days ++ ;
                }
            }
        }
        cout << lose_days << endl ;
    }
    return 0;
}
