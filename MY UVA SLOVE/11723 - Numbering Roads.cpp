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
    long int i,j,k,t_case,r,n,temp,temp2,count2 = 0,count;
    while(scanf("%ld %ld",&r,&n)==2)
    {
        count2++ ;
        if(r == 0 && n == 0)
            break ;

        count = 0 ;
        temp = r - n ;
        temp2 = temp ;
        k = 0 ;
        if(temp <= 0)
        {
            printf("Case %ld: 0\n",count2) ;
        }
        else
        {
            for(i = 1 ; i <= temp ; i++)
            {
                count++;
                temp2 = temp2 - n ;
                if(count > 26)
                {
                    printf("Case %ld: impossible\n",count2);
                    break ;
                }
                else if(temp2 <= 0)
                {
                    printf("Case %ld: %ld\n",count2,count) ;
                    break ;
                }

            }
        }
    }
    return 0;
}
