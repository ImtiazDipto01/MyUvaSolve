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

int main()
{
    long long int i,j,k,t_case,a,b,c,t_case2,sum;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        cin >> t_case2 ;
        sum = 0 ;
        for(j = 1 ; j <= t_case2 ; j++)
        {
            cin >> a >> b >> c ;
            sum = (sum + (a * c)) ;
        }
        cout << sum << endl ;

    }
    return 0;
}

