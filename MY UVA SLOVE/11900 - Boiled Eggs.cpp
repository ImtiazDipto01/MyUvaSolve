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
int gm[35] ;

int main()
{
    int i,j,k,t_case,n,p,q,sum,max_cnt ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        cin >> n >> p >> q ;
        for(j = 0 ; j < n ; j++)
        {
            cin >> gm[j] ;
        }
        sort(gm , gm + n) ;
        max_cnt = 0 ;
        sum = 0 ;
        for(j = 0 ; j < n ; j++)
        {
            sum = sum + gm[j] ;
            if(sum <= q && max_cnt < p)
            {
                max_cnt ++ ;
            }
        }
        printf("Case %d: %d\n",i,max_cnt) ;
    }
    return 0;
}

