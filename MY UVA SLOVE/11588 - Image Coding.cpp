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

int counter[150] ;
char str[100] ;
int main()
{
    int i,j,k,t_case,r,c,m,n,max,save,count,sum,len,tmp,sum2 ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        memset(counter,0,sizeof(counter)) ;
        cin >> r >> c >> m >> n ;
        max = 0 ;
        for(j = 0 ; j < r ; j++)
        {
            scanf("%s",&str) ;
            len = strlen(str) ;
            for(k = 0 ; k < len ; k++)
            {
                tmp = str[k] ;
                counter[tmp]++ ;
                if(counter[tmp] > max)
                {
                    max = counter[tmp] ;
                    save = tmp ;
                }
                if(k == (c - 1))
                    break ;
            }
        }
        sum = 0 ;
        sum2 = 0 ;
        for(j = 0 ; j <= 150 ; j++)
        {
            if(counter[j] == max)
            {
                sum2 += max ;
            }
            else
            {
                sum += counter[j] ;
            }
        }
        sum = ((sum2 * m) + (sum * n)) ;
        printf("Case %d: %d\n",i,sum) ;
    }
    return 0;
}
