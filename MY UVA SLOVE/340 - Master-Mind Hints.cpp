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

int code[10000],guess[10000],chk[10000] ;
pair<int, int> p[10000] ;

int main()
{
    int i,j,k,t_case = 0,len,index;
    while(cin >> len)
    {
        if(len == 0)
            break ;

        t_case ++ ;
        printf("Game %d:\n",t_case) ;
        for(i = 0 ; i < len ; i++)
        {
            cin >> code[i] ;
        }
        index = 0 ;
        while(1)
        {
            int fst = 0,scnd = 0,zeros = 0 ;
            for(i = 0 ; i < len ; i++)
            {
                cin >> guess[i] ;
                chk[i] = code[i] ;
                if(guess[i] == 0)
                {
                    zeros ++ ;
                }
                if(guess[i] == chk[i] && guess[i] != 0)
                {
                    fst ++ ;
                    chk[i] = 0 ;
                    guess[i] = -1 ;
                }
            }
            if(zeros == len)
                break ;

            for(i = 0 ; i < len ; i++)
            {
                for(j = 0 ; j < len ; j++)
                {
                    if(chk[i] == guess[j])
                    {
                        scnd ++ ;
                        chk[i] = 0 ;
                        guess[j] = -1 ;
                        break ;
                    }
                }
            }
            printf("    (%d,%d)\n",fst,scnd) ;
        }
    }
    return 0;
}

