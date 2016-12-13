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

int a[1000] ;

int main()
{
    int i,j,k,t_case,tmp,len,max,count = 0;
    char str[1010] ;
    while(gets(str))
    {
        len = strlen(str) ;
        max = 0 ;
        memset(a,0,sizeof(a)) ;
        for(i = 0 ; i < len ; i++)
        {
            tmp = str[i] ;
            a[tmp]++ ;

            if(a[tmp] > max)
                max = a[tmp] ;
        }

        if(count > 0)
            cout << endl ;

        for(i = 1 ; i <= max ; i++)
        {
            for(j = 127 ; j >= 1 ; j--)
            {
                if(i == a[j])
                {
                    printf("%d %d\n",j,a[j]) ;
                }
            }
        }
        count ++ ;
    }
    return 0;
}
