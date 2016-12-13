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

stack<char> mystk ;

int main()
{
    int i,j,k,t_case,flag ;
    string s ;
    cin >> t_case ;
    cin.ignore() ;
    for(i = 1 ; i <= t_case ; i++)
    {
        //cin >> s ;
        getline(cin , s) ;
        flag = 0 ;
        int len = s.length() ;
        int cnt = 0 ;
        for(j = 0 ; j < len ; j++)
        {
            if(s[j] == '(' || s[j] == '[')
            {
                   mystk.push(s[j]) ;
            }
            if(s[j] == ')' || s[j] == ']')
            {
                int tmp1 = s[j] ;
                if(!mystk.empty())
                {
                    int tmp = mystk.top() ;
                    if(tmp == 91 && tmp1 ==  93 || tmp == 40 && tmp1 == 41)
                    {
                        mystk.pop() ;
                        cnt ++ ;
                    }
                    else
                    {
                        cout << "No" << endl ;
                        //cout << "1" << endl ;
                        flag = 1 ;
                        break ;
                    }
                }
                else
                {
                    cout << "No" << endl ;
                    //cout << "2" << endl ;
                    flag = 1 ;
                    break ;
                }
            }
        }
        int sz = mystk.size() ;
        if(len == 0)
        {
            //cout << "1" << endl ;
            cout << "Yes" << endl ;
        }
        else if(flag == 0 && sz == 0)
        {
            //cout << "2" << endl ;
            cout << "Yes" << endl ;
        }
        else if(cnt == 0 && flag == 0)
        {
            cout << "No" << endl ;
        }
        else if(sz != 0 && flag == 0)
        {
            cout << "No" << endl ;
        }
        while(!mystk.empty())
        {
            mystk.pop() ;
        }
    }
    return 0;
}
