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
#define MAX 100000


using namespace std;

char str[MAX] ;
map<string,string> M ;

int main()
{
    int i,j,k,t_case;
    string s1,s2,s,chk ;
    while(gets(str))
    {
        if(str[0] == '\0')
            break ;
        stringstream ss(str) ;
        ss >> s1 ;
        ss >> s2 ;
        M[s2] = s1 ;
    }
    while(cin >> s)
    {
       chk = M[s] ;
       if(chk[0] == '\0')
       {
           cout << "eh" << endl ;
       }
       else
       {
           cout << M[s] << endl ;
       }
    }
    return 0;
}

