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


using namespace std;

int num_bricks[1000] ;

int main()
{
    int i,j,k,stcks,h_bricks,min_moves,sum,sets = 0 ;
    while(scanf("%d",&stcks) == 1)
    {
        sets ++ ;
        if(stcks == 0)
            break ;

        sum = 0 ;
        h_bricks = 0 ;
        for(i = 0 ; i < stcks ; i++)
        {
            cin >> num_bricks[i] ;
            sum = sum + num_bricks[i] ;
        }
        h_bricks = sum / stcks ;
        min_moves = 0 ;
        for(i = 0 ; i < stcks ; i++)
        {
            if(num_bricks[i] > h_bricks)
            {
                min_moves = (min_moves + (num_bricks[i] - h_bricks)) ;
            }
        }
        printf("Set #%d\n",sets) ;
        printf("The minimum number of moves is %d.\n",min_moves) ;
        cout << endl ;
    }
    return 0;
}

