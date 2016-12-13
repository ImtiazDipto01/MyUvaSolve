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

map<string , string> M ;

int main()
{
    int i,j,k,t_case,t_case2,count = 0;
    string s,s1,s2 ;
    cin >> t_case ;
    cin.ignore() ;
    for(i = 1 ; i <= t_case ; i++)
    {
        getline(cin,s) ;
        getline(cin,s1) ;
        M[s] = s1 ;
    }
    cin >> t_case2 ;
    cin.ignore() ;
    for(i = 1 ; i <= t_case2 ; i++)
    {
        getline(cin,s2) ;
        cout << M[s2] << endl ;
    }
    return 0;
}
