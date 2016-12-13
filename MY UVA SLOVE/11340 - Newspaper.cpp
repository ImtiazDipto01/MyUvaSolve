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

long long int ch_counter[258] ;

int main()
{
    long long int i,j,k,t_case,t_case2,ch_value,str_line,sum ;
    char  str[10005] ,ch ;
    string s;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        memset(ch_counter , 0 , sizeof(ch_counter)) ;
        cin >> t_case2 ;
        for(j = 1 ; j <= t_case2 ; j++)
        {
            cin >> ch >> ch_value ;
            ch_counter[ch + 128] = ch_value ;
        }
        cin >> str_line ;
        getchar() ;
        sum = 0 ;
        for(j = 1 ; j <= str_line ; j++)
        {
            gets(str) ;
            int len = strlen(str) ;
            for(k = 0 ; k < len ; k++)
            {
                if(ch_counter[str[k] + 128] > 0)
                {
                    sum = sum + ch_counter[str[k] + 128] ;
                }
            }
        }
        printf("%.2lf$\n",sum/100.0) ;
    }
    return 0;
}
