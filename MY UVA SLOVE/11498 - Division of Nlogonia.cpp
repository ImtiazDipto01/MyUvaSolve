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
    long long int i,j,k,t_case,n,m,r1,r2;
    while(cin >> t_case)
    {
        if(t_case == 0)
            break ;

        cin >> n >> m ;
        for(i = 1 ; i <= t_case ; i++)
        {
            cin >> r1 >> r2 ;
            if(r1 == n || r2 == m)
            {
                cout << "divisa" << endl ;
            }
            else if(r1 >= n && r2 >= m)
            {
                cout << "NE" << endl ;
            }
            else if(r1 < n && r2 > m)
            {
                cout << "NO" << endl ;
            }
            else if(r1 < n && r2 < m)
            {
                cout << "SO" << endl ;
            }
            else if(r1 > n && r2 < m)
            {
                cout << "SE" << endl ;
            }
        }
    }
    return 0;
}

