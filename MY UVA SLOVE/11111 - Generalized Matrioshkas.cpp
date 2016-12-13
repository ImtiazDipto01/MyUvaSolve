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

stack<int> mystk ;
stack<int> cur ;

int main()
{
    int i,j,k,t_case,n ;
    string s ;
    while(getline(cin,s))
    {
        stringstream ss (s) ;
        int flag = 0 ;
        while(ss >> n)
        {
            if(n < 0)
            {
                n = (n * (-1));
                mystk.push(n) ;
                if(cur.empty())
                {
                    cur.push(n) ;
                }
                else if(!cur.empty())
                {
                    int tmp = cur.top() ;
                    tmp = tmp - n ;
                    cur.pop() ;
                    if(tmp > 0)
                    {
                        cur.push(tmp) ;
                        cur.push(n) ;
                    }
                    else
                    {
                        cout << ":-( Try again." << endl ;
                        flag = 1 ;
                        break ;
                    }
                }
            }
            else if(n > 0 && !mystk.empty() && !cur.empty())
            {
                int tmp2 = mystk.top() ;
                if(tmp2 == n)
                {
                    mystk.pop() ;
                    cur.pop() ;
                }
                else
                {
                    cout << ":-( Try again." << endl ;
                    flag = 1 ;
                    break ;
                }
            }
            else if(n > 0 && mystk.empty() && cur.empty())
            {
                cout << ":-( Try again." << endl ;
                flag = 1 ;
                break ;
            }
        }
        if(flag == 0 && mystk.empty() && cur.empty())
        {
            cout << ":-) Matrioshka!" << endl ;
        }
        else if(flag == 0 && !mystk.empty() && !cur.empty())
        {
            cout << ":-( Try again." << endl ;
        }
        while(!mystk.empty())
        {
            mystk.pop() ;
        }
        while(!cur.empty())
        {
            cur.pop() ;
        }
    }
    return 0;
}
