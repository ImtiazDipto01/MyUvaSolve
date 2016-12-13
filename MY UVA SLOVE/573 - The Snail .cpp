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
    int i,j,k,t_case, day;
    double h,u,d,f,sum,r,tmp ;
    while(cin >> h >> u >> d >> f)
    {
        if(h == 0)
            break ;

        sum = 0 ;
        day = 0 ;
        tmp = u ;
        while(1)
        {
            if(day > 0 && u > 0)
            {
                r = f / 100 ;
                r = tmp * r ;
                u = u - r ;
                sum = sum + u ;
            }
            if(day == 0)
            {
                sum = sum + u ;
            }
            day ++ ;
            if(sum > h || sum < 0)
            {
                break ;
            }
            sum = sum - d ;
            if(sum > h || sum < 0)
            {
                break ;
            }

        }
        if(sum > 0)
        {
            printf("success on day %d\n",day) ;
        }
        else if(sum < 0)
        {
            printf("failure on day %d\n",day) ;
        }
    }
    return 0;
}
