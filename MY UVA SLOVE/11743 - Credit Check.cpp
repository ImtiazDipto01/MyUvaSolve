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
    int i,j,k,t_case ;
    char str[30] ;
    cin >> t_case ;
    getchar() ;
    for(i = 1 ; i <= t_case ; i++)
    {
        gets(str) ;
        int len = strlen(str) ;
        int count = 0 , undbl = 0 , dbl = 0 ;
        for(j = len - 1 ; j >= 0 ; j--)
        {
            if(str[j] == ' ')
            {
                continue ;
            }
            int tmp = str[j] ;
            tmp = tmp - 48 ;
            count ++ ;
            if(count == 1)
            {
                undbl += tmp ;
            }
            if(count == 2)
            {
                tmp = tmp + tmp ;
                if(tmp > 9)
                {
                    while(tmp != 0)
                    {
                        int rem = tmp % 10 ;
                        dbl += rem ;
                        tmp =tmp / 10 ;
                    }
                }
                else
                {
                    dbl += tmp ;
                }
                count = 0 ;
            }
        }
        int result = dbl + undbl ;
        if(result % 10 == 0)
        {
            cout << "Valid" << endl ;
        }
        else
        {
            cout << "Invalid" << endl ;
        }
    }
    return 0;
}
