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

int marks[2000] ;
char str[2] ;

int main()
{
    int i,j,k ;
    double t_case,s,avrg;
    double ans ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        str[0] = '%' ;
        cin >> s ;
        avrg = 0 ;
        for(j = 0 ; j < s ; j++)
        {
            cin >> marks[j] ;
            avrg = avrg + marks[j] ;
        }
        avrg = avrg / s ;
        double count = 0 ;
        for(j = 0 ; j < s ; j++)
        {
            if(marks[j] > avrg)
                count++ ;
        }
        ans = ((count / s) * 100) ;
        printf("%0.03lf%c\n",ans,str[0]) ;
    }
    return 0;
}

