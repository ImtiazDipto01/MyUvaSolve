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
    int i,j,k,t_case,cnst,bdg,htl,wk,tk,avl[10000],sum,tl_sit,cost,min;
    while(scanf("%d %d %d %d",&cnst,&bdg,&htl,&wk) == 4)
    {
        min = 500050 ;
        for(i = 1 ; i <= htl ; i++)
        {
            scanf("%d",&tk) ;
            sum = 0 ;
            cost = 0 ;
            for(j = 0 ; j < wk ; j++)
            {
                scanf("%d",&avl[j]) ;
            }
            for(j = 0 ; j < wk ; j++)
            {
                if(avl[j] >= cnst)
                {
                    cost = tk * cnst ;
                    if(cost <= bdg)
                    {
                        if(cost < min)
                        {
                            min = cost ;
                        }
                    }
                    break ;
                }
            }
        }
        if(min == 500050)
        {
            printf("stay home\n") ;
        }
        else
        {
            printf("%d\n",min) ;
        }
    }
    return 0;
}
