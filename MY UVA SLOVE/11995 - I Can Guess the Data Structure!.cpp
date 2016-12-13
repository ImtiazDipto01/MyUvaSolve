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
stack<int> mys ;
queue<int> myq ;
priority_queue<int>mypq ;

int ot[1000],sot[1000],qot[1000],pqot[1000] ;

int main()
{
    int i,j,k,t_case,n,m,indx1,indx2,indx3,indx4,s,q,pq ;
    while(cin >> t_case)
    {
        indx1 = indx2 = indx3 = indx4 = 0 ;
        s = q = pq = 0 ;
        memset(ot,0,sizeof(ot)) ;
        memset(sot,0,sizeof(sot)) ;
        memset(qot,0,sizeof(qot)) ;
        memset(pqot,0,sizeof(pqot)) ;
        for(i = 1 ; i <= t_case ; i++)
        {
            cin >> n >> m ;
            if(n == 1)
            {
                mys.push(m) ;
                myq.push(m) ;
                mypq.push(m) ;
            }
            if(n == 2)
            {
                ot[indx1++] = m ;
                if(!mys.empty())
                {
                   sot[indx2++] = mys.top() ;
                   mys.pop() ;
                }
                if(!myq.empty())
                {
                   qot[indx3++] = myq.front() ;
                   myq.pop() ;
                }
                if(!mypq.empty())
                {
                    pqot[indx4++] = mypq.top() ;
                    mypq.pop() ;
                }
            }
        }
        while(!mys.empty())
        {
            mys.pop() ;
        }
        while(!myq.empty())
        {
            myq.pop() ;
        }
        while(!mypq.empty())
        {
            mypq.pop() ;
        }
        for(i = 0 ; i < indx1 ; i++)
        {
            if(sot[i] == ot[i])
            {
                s = 1 ;
            }
            else
            {
                s = 0 ;
                break ;
            }
        }
        for(i = 0 ; i < indx1 ; i++)
        {
            if(qot[i] == ot[i])
            {
                q = 1 ;
            }
            else
            {
                    q = 0 ;
                break ;
            }
        }
        for(i = 0 ; i < indx1 ; i++)
        {
            if(pqot[i] == ot[i])
            {
                pq = 1 ;
                }
            else
            {
                pq = 0 ;
                break ;
            }
        }
        if(s == 0 && q == 0 && pq == 0 && indx2 == 0 && indx3 == 0 && indx4 == 0 && indx1 == 0)
        {
            cout << "not sure" << endl ;
        }
        else if(s == 0 && q == 0 && pq == 0 && indx2 == 0 && indx3 == 0 && indx4 == 0 && indx1 > 0)
        {
            cout << "impossible" << endl ;
        }
        else if(s == 1 && q == 0 && pq == 0)
        {
            cout << "stack" << endl ;
        }
        else if(s == 0 && q == 1 && pq == 0)
        {
            cout << "queue" << endl ;
        }
        else if(s == 0 && q == 0 && pq == 1)
        {
            cout << "priority queue" << endl ;
        }
        else if((s+q+pq) > 1)
        {
            cout << "not sure" << endl ;
        }
        else if(s == 0 && q == 0 && pq == 0)
        {
            cout << "impossible" << endl ;
        }
    }
    return 0;
}
