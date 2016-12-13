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

map<string, long long int> mymap ;

int main()
{
    long long int i,j,k,job,job_dp,slry,len,tmp;
    string str , line, word ;
    cin >> job >> job_dp ;
    cin.ignore() ;
    for(i = 1 ; i <= job ; i++)
    {
        cin >> str ;
        cin >> slry ;
        mymap[str] = slry ;
    }
    for(i = 1 ; i <= job_dp ; i++)
    {
        long long int sum = 0 ;
        while(getline(cin , line))
        {
            if(line[0] == '.')
                break ;

            stringstream ss(line) ;
            while(ss >> word)
            {
                tmp = mymap[word] ;
                if(tmp != 0)
                {
                    sum = sum + tmp ;
                }
            }
        }
        cout << sum << endl ;
    }
    return 0;
}

