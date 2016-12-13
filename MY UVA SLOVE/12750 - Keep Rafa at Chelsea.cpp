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
    int i,j,k,t_case,match , lose , stand, flag  ;
    char s ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        cin >> match ;
        lose = 0 ;
        stand = 0 ;
        flag = 0 ;
        for(j = 1 ; j <= match ; j++)
        {
            cin >> s ;
            if(s == 'L' && flag == 0 || s == 'D' && flag == 0)
            {
                lose ++ ;
                stand ++ ;
            }
            else if(s == 'W' && flag == 0)
            {
                stand ++ ;
                lose = 0 ;
            }
            if(lose == 3)
            {
                flag = 1 ;
            }
        }
        if(lose == 3 && flag == 1)
        {
            printf("Case %d: %d\n",i,stand) ;
        }
        else
        {
            printf("Case %d: Yay! Mighty Rafa persists!\n",i) ;
        }
    }
    return 0;
}

