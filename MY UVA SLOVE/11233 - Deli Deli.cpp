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

map<string , string> mymap ;

int main()
{
    int i,j,k,t_case,l,n,len ;
    string str,str2 ;
    cin >> l >> n;
    for(i = 1 ; i <= l ; i++)
    {
        cin >> str >> str2 ;
        mymap[str] = str2 ;
    }
    for(j = 1 ; j <= n ; j++)
    {
        cin >> str ;
        str2 = mymap[str] ;
        len = str.length() ;
        if(str2[0] != '\0')
        {
            cout << mymap[str] << endl ;
        }
        else if(str[len-1] == 'y' && str[len-2] != 'a' && str[len-2] != 'e' && str[len-2] != 'i' && str[len-2] != 'o' && str[len-2] != 'u')
        {
            str[len-1] = 'i' ;
            cout << str << "es" << endl ;
        }
        else if(str[len-1] == 'o' || str[len-1] == 's' || str[len-1] == 'x')
        {
            cout << str << "es" << endl ;
        }
        else if(str[len-2] == 'c' && str[len-1] == 'h' || str[len-2] == 's' && str[len-1] == 'h')
        {
            cout << str << "es" << endl ;
        }
        else
        {
            cout << str << "s" << endl ;
        }
    }
    return 0;
}
