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
#define size 10000

using namespace std;

pair<long long int , long long int> p[size] ;
long long int grid[size] ;

int main()
{
    long long int i,j,k,t_case,car_no,pos,tmp,pos2,flag ;
    while(cin >> t_case)
    {
        memset(grid , 0 , sizeof(grid)) ;
        if(t_case == 0)
            break ;
        for(i = 0 ; i < t_case ; i++)
        {
            cin >> car_no >> pos ;
            p[i] = make_pair(car_no , pos) ;
        }
        for(i = 0 ; i < t_case ; i++)
        {
            flag = 1 ;
            pos2 = 0 ;
            tmp = p[i].second ;
            if(tmp > (t_case - 1))
            {
                flag = 0 ;
                printf("-1\n") ;
                break ;
            }
            else if(tmp < 0)
            {
                tmp = (tmp * (-1)) ;
                pos2 = i - tmp ;
                if(pos2 > (t_case - 1))
                {
                    flag = 0 ;
                    printf("-1\n") ;
                    break ;
                }
                if(pos2 < 0)
                {
                    flag = 0 ;
                    printf("-1\n") ;
                    break ;
                }
                if(grid[pos2] != 0)
                {
                    flag = 0 ;
                    printf("-1\n") ;
                    break ;
                }
                if(grid[pos2] == 0)
                {
                    grid[pos2] = p[i].first ;
                }
            }
            else if(tmp > 0)
            {
                pos2 = i + tmp ;
                if(pos2 > (t_case - 1))
                {
                    flag = 0 ;
                    printf("-1\n") ;
                    break ;
                }
                if(grid[pos2] != 0)
                {
                    flag = 0 ;
                    printf("-1\n") ;
                    break ;
                }
                if(grid[pos2] == 0)
                {
                    grid[pos2] = p[i].first ;
                }
            }
            else if(tmp == 0)
            {
                if(grid[i] != 0)
                {
                    flag = 0 ;
                    printf("-1\n") ;
                    break ;
                }
                if(grid[i] == 0)
                {
                    grid[i] = p[i].first ;
                }
            }
        }
        if(flag != 0)
        {
            for(i = 0 ; i < t_case ; i++)
            {
                cout << grid[i] ;
                if(i != (t_case -1))
                {
                    cout << " " ;
                }
            }
            cout << endl ;
        }
    }
    return 0;
}
