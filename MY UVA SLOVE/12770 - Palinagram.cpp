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

int counter[125] ;

int main()
{
    int i,j,k,t_case ;
    string s ;
    while(cin >> s)
    {
        if(s == "#")
            break ;
        int len = s.length() ;
        memset(counter,0,sizeof(counter)) ;
        int odd_chk = 0 ;
        for(i = 0 ; i < len ; i++)
        {
            int tmp = s[i] ;
            counter[tmp] ++ ;
        }
        for(i = 97 ; i < 123 ; i++)
        {
            if(counter[i] % 2 != 0)
                odd_chk ++ ;
        }
        int chk = odd_chk ;
        if(odd_chk > 1)
        {
            for(i = 97 ; i < 123 ; i++)
            {
                if(counter[i] % 2 != 0 && chk > 1)
                {
                    printf("%c",i) ;
                    chk -- ;
                }
                if(chk == 1)
                {
                    cout << endl ;
                    break ;
                }
            }
        }
        else if(odd_chk <= 1)
        {
            cout << "" << endl ;
        }
    }
    return 0;
}

