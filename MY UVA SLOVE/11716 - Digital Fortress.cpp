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
#define size 10010

using namespace std;

char input[size],output[size] ;

int main()
{
    int i,j,k,t_case,len,index = 0,l ;
    cin >> t_case ;
    getchar() ;
    for(i = 1 ; i <= t_case ; i++)
    {
        index = 0 ;
        gets(input) ;
        len = strlen(input) ;
        l = sqrt(len) ;
        if((l * l) == len)
        {
            for(j = 0 ; j < len ; j++)
            {
                if(input[j] == '*')
                    continue ;

                for(k = j ; k < len ; k+=l)
                {
                    output[index++] = input[k] ;
                    input[k] = '*' ;
                }
            }
            for(j = 0 ; j < index ; j++)
            {
                cout << output[j] ;
            }
            cout << endl ;
        }
        else
        {
            cout << "INVALID" << endl ;
        }
    }
    return 0;
}
