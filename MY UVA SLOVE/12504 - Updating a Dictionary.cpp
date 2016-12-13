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
using namespace std ;

map <string , string> OD ;
map <string , string> ND ;
vector<string> add ;
vector<string> multi ;
vector<string> sub ;

int main()
{
    int i,j,k,t_case,len,len2,c,c1,f ;
    string s1, key ,value,od,nd ;
    char  s[110]  ;
    cin >> t_case ;
    while(t_case --)
    {
        OD.clear() ;
        ND.clear() ;
        add.clear() ;
        multi.clear() ;
        sub.clear() ;
        cin >> od >> nd ;
        len = od.length() ;
        len2 = nd.length() ;
        c = 0 ;
        c1 = 0 ;
        int index = 0 ;
        key = '\0' ;
        value = '\0' ;
        f = 0 ;
        for(i = 0 ; i < len ; i++)
        {
            if(od[i] != '}' && od[i] != '{' && od[i] != ',' && od[i] != ':')
            {
                s[index++] = od[i] ;
            }
            if(od[i] == ':')
            {
                f = 1 ;
                s[index++] = '\0' ;
                key = string(s) ;
                index = 0 ;
            }
            if(od[i] == ',' || i == (len - 1) && f == 1)
            {
                s[index++] = '\0' ;
                value = string(s) ;
                OD[key] = value ;
                index = 0 ;
                c ++ ;
            }
        }
        index = 0 ;
        f = 0 ;
        for(i = 0 ; i < len2 ; i++)
        {
            if(nd[i] != '}' && nd[i] != '{' && nd[i] != ',' && nd[i] != ':')
            {
                s[index++] = nd[i] ;
            }
            if(nd[i] == ':')
            {
                f = 1 ;
                s[index++] = '\0' ;
                key = string(s) ;
                index = 0 ;
            }
            if(nd[i] == ',' || i == (len2 - 1) && f == 1)
            {
                s[index++] = '\0' ;
                value = string(s) ;
                ND[key] = value ;
                index = 0 ;
                s1 = OD[key] ;
                if(s1[0] == '\0')
                {
                   add.push_back(key) ;
                }
                if(s1[0] != '\0')
                {
                    if(OD[key] != ND[key])
                    {
                        multi.push_back(key) ;
                    }
                }
                if(OD[key] == ND[key])
                {
                    c1 ++ ;
                }
            }
        }
        index = 0 ;
        f = 0 ;
        for(i = 0 ; i < len ; i++)
        {
            if(od[i] != '}' && od[i] != '{' && od[i] != ',' && od[i] != ':')
            {
                s[index++] = od[i] ;
            }
            if(od[i] == ':')
            {
                f = 1 ;
                s[index++] = '\0' ;
                key = string(s) ;
                index = 0 ;
            }
            if(od[i] == ',' || i == (len - 1) && f == 1)
            {
                s[index++] = '\0' ;
                value = string(s) ;
                index = 0 ;
                s1 = ND[key] ;
                if(s1[0] == '\0')
                {
                    sub.push_back(key) ;
                }
            }
        }
        int size1 , size2 , size3 ;
        size1 = add.size() ;
        size2 = sub.size() ;
        size3 = multi.size() ;
        if(size1 == 0 && size2 == 0 && size3 == 0 && c == c1)
        {
            cout << "No changes" << endl ;
        }
        else
        {
            int t = 0 ;
            sort(add.begin(),add.end()) ;
            for(i = 0 ; i < size1 ; i++)
            {
                if(t == 0)
                {
                    cout << "+" << add[i] ;
                    t++ ;
                }
                else if(t > 0)
                {
                    cout << "," << add[i] ;
                }
                if(i == (size1 - 1))
                {
                    cout << endl ;
                }
            }
            t = 0 ;
            sort(sub.begin(),sub.end()) ;
            for(i = 0 ; i < size2 ; i++)
            {
                if(t == 0)
                {
                    cout << "-" << sub[i] ;
                    t++ ;
                }
                else if(t > 0)
                {
                    cout << "," << sub[i] ;
                }
                if(i == (size2 - 1))
                {
                    cout << endl ;
                }
            }
            t = 0 ;
            sort(multi.begin(),multi.end()) ;
            for(i = 0 ; i < size3 ; i++)
            {
                if(t == 0)
                {
                    cout << "*" << multi[i] ;
                    t++ ;
                }
                else if(t > 0)
                {
                    cout << "," << multi[i] ;
                }
                if(i == (size3 - 1))
                {
                    cout << endl ;
                }
            }
        }
        cout << endl ;
    }
    return 0 ;
}
