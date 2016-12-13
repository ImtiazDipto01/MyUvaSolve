#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <map>
#include <vector>


using namespace std;

int main()
{
    int i,j,k,t_case,t_case2,sec,mile,juice,flag_m,flag_j,temp_m,temp_j;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        cin >> t_case2 ;
        mile = 0 ;
        juice = 0 ;
        for(j = 1 ; j <= t_case2 ; j++)
        {
            cin >> sec ;
            flag_m = 0 ;
            flag_j = 0 ;
            temp_m = 0 ;
            temp_j = 0 ;
            for(k = 1 ; k <= sec ; k++)
            {
                if(k == 1)
                {
                    mile += 10 ;
                }
                if(k == 1)
                {
                    juice += 15 ;
                }
                if(k == 1)
                {
                    temp_m = k + 29 ;
                    temp_j = k + 59 ;
                }
                if(k >= temp_m)
                {
                    flag_m = 1 ;
                    mile += 10 ;
                }
                if(flag_m == 1)
                {
                    temp_m = k + 30 ;
                    flag_m = 0 ;
                }
                if(k >= temp_j)
                {
                    flag_j = 1 ;
                    juice += 15 ;
                }
                if(flag_j == 1)
                {
                    temp_j = k + 60 ;
                    flag_j = 0 ;
                }
            }
        }
            if(mile < juice)
            {
                printf("Case %d: Mile %d\n",i,mile);
            }
            else if(mile > juice)
            {
                printf("Case %d: Juice %d\n",i,juice);
            }
            else if(mile == juice)
            {
                printf("Case %d: Mile Juice %d\n",i,mile);
            }
    }
    return 0;
}

