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
#define MAX 1000015
using namespace std;

vector<int>v[MAX] ;
long int a[MAX],cnt[MAX] ;
int main()
{
    long int i,j,k,t_case,n,m,c,num,tmp,tmp2 ;
    while(cin >> n >> m)
    {
        memset(cnt,0,sizeof(cnt)) ;
        for(i = 0 ; i <= MAX ; i++)
        {
            v [i].clear() ;
        }
        for(i = 0 ; i < n ; i++)
        {
           cin >> a[i] ;
           tmp = a[i] ;
           cnt[tmp]++ ;
           v[tmp].push_back(i) ;
        }
        for(i = 0 ; i < m ; i++)
        {
            cin >> c >> num ;
            tmp = v[num][c - 1] ;
            if(v[num].size() < c)
            {
                cout << "0" << endl ;
            }
            else
            {
                cout << tmp + 1 << endl ;
            }
        }
    }
    return 0;
}
