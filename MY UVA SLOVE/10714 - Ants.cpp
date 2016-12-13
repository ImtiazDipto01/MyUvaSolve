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


int main()
{
    int i,j,k,t_case,n,m,ants,a,b,mx,mn ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        cin >> n >> m ;
        mx = mn = 0 ;
        for(j = 1 ; j <= m ; j++)
        {
            cin >> ants ;
            a = ants - 0 ;
            b = n - ants ;
            if(a > b)
            {
                if(mx < a)
                {
                    mx = a ;
                }
                if(mn < b)
                {
                    mn = b ;
                }
            }
            if(b > a)
            {
                if(mx < b)
                {
                    mx = b ;
                }
                if(mn < a)
                {
                    mn = a ;
                }
            }
            if(b == a)
            {
                if(mx < b)
                {
                    mx = b ;
                }
                if(mn < a)
                {
                    mn = a ;
                }
            }
        }
        cout << mn << " " << mx << endl ;
    }
    return 0;
}
