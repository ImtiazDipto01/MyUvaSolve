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

using namespace std ;

int a[5] ;

int main()
{
    int i,j,k,t_case,len,ans,cnt,tmp,sign,count = 0 ;
    char s[100] ;
    string s2 ;
    while(scanf("%s",&s) == 1)
    {
        len = strlen(s) ;
        int index = 0,index2 = 0 ;
        if(s[len - 1] ==  '?')
        {
            continue ;
        }
        else
        {
            for(i = 0 ; i < len ; i++)
            {
                if(s[i] >= '0' && s[i] <= '9')
                {
                    s2[index++] = s[i] ;
                }
                if(s[i] == '+')
                {
                    s2[index++] = '\0' ;
                    sign = 1 ;
                    tmp = atoi(s2.c_str());
                    a[index2++] = tmp ;
                    index = 0 ;
                }
                if(s[i] == '-')
                {
                    s2[index++] = '\0' ;
                    sign = 2 ;
                    tmp = atoi(s2.c_str());
                    a[index2++] = tmp ;
                    index = 0 ;
                }
                if(s[i] == '=')
                {
                    s2[index++] = '\0' ;
                    tmp = atoi(s2.c_str());
                    a[index2++] = tmp ;
                    index = 0 ;
                }
                if(i == (len - 1))
                {
                    s2[index++] = '\0' ;
                    tmp = atoi(s2.c_str());
                    a[index2++] = tmp ;
                    index = 0 ;
                }
            }
            if(sign == 1)
            {
               ans = a[0] + a[1] ;
            }
            if(sign == 2)
            {
               ans = a[0] - a[1] ;
            }
            if(ans == a[2])
            {
                count ++ ;
            }
        }
    }
    cout << count << endl ;
    return 0;
}
