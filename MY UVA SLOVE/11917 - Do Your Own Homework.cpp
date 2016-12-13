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

map<string , int> M ;

int main()
{
    int i,j,k,t_case,com_sub,com_d,D ;
    string com_str , D_str ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        M.clear() ;
        cin >> com_sub ;
        for(j = 1 ; j <= com_sub ; j++)
        {
            cin >> com_str >> com_d ;
            M[com_str] = com_d ;
        }
        cin >> D >> D_str ;
        if(M[D_str] <= D && M[D_str] != 0)
        {
            printf("Case %d: Yesss\n",i) ;
        }
        else if(M[D_str] > D && M[D_str] <= D+5)
        {
            printf("Case %d: Late\n",i) ;
        }
        else if(M[D_str] > D+5 || M[D_str] == 0)
        {
            printf("Case %d: Do your own homework!\n",i) ;
        }
    }
    return 0;
}
