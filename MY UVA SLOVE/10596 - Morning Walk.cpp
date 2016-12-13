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

int cnt[205] , mycnt, mark[205] ;
vector<int> v[205] ;
queue<int> myq ;

void bfs(int src)
{
    int visit[205] = {0} ;
    myq.push(src) ;
    visit[src] = 1 ;
    mycnt = 0 ;
    while(!myq.empty())
    {
        int frnt = myq.front() ;
        for(int i = 0 ; i < v[frnt].size() ; i++)
        {
            int tmp = v[frnt][i] ;
            if(visit[tmp] == 0)
            {
                myq.push(tmp) ;
                visit[tmp] = 1 ;
            }
        }
        myq.pop() ;
        mycnt ++ ;
    }

}

int main()
{
    int i,j,k,t_case,n,m,n1,n2,src,node ;
    while(cin >> n >> m)
    {
        node = 0 ;
        memset(cnt , 0 , sizeof(cnt)) ;
        memset(mark , 0 , sizeof(mark)) ;
        for(i = 0 ; i <= 205 ; i++)
        {
            v[i].clear() ;
        }
        for(i = 1 ; i <= m ; i++)
        {
            cin >> n1 >> n2 ;
            if(i == 1)
            {
                src = n1 ;
            }
            cnt[n1] ++ ;
            cnt[n2] ++ ;
            if(mark[n1] == 0)
            {
                mark[n1] = 1 ;
                node ++ ;
            }
            if(mark[n2] == 0)
            {
                mark[n2] = 1 ;
                node ++ ;
            }
            v[n1].push_back(n2) ;
        }
        bfs(src) ;
        int flag = 0 ;
        if(mycnt == node)
        {
            flag = 1 ;
        }
        int count = 0 ;
        for(i = 0 ; i < 205 ; i++)
        {
            if(cnt[i] != 0 && cnt[i] % 2 == 0)
            {
                count ++ ;
            }
        }
        if(count == node && flag == 1)
        {
            cout << "Possible" << endl ;
        }
        else
        {
            cout << "Not Possible" << endl  ;
        }
    }
    return 0;
}
