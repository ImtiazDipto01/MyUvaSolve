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

pair<string , int> p[15] ;

int main()
{
    int i,j,k,t_case, n,max,tmp;
    string web ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        max = 0 ;
        for(j = 0 ; j < 10 ; j++)
        {
            cin >> web ; cin >> n ;
            if(max < n)
                max = n ;

            p[j] = make_pair(web , n) ;
        }
        printf("Case #%d:\n",i) ;
        for(j = 0 ; j < 10 ; j++)
        {
            tmp = p[j].second ;
            if(tmp == max)
            {
                cout << p[j].first << endl ;
            }
        }
    }
    return 0;
}
