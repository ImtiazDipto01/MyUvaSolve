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
    int i,j,k,t_case, t_case2 ;
    char str[200] ;
    char c ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        cin >> t_case2 ;
        int index = 0 ;
        for(j = 1 ; j <= t_case2 ; j++)
        {
            cin >> c ;
            str[index++] = c ;
        }
        int count = 0 ;
        for(j = 0 ; j < index ; j++)
        {
            if(str[j] == '.')
            {
                count ++ ;
                j = j + 2 ;
            }
        }
        printf("Case %d: %d\n",i,count) ;
    }
    return 0;
}
