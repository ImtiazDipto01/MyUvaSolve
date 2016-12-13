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

int main()
{
    int i,j,k,t_case,c = 0;
    char str[10000] ;
    cin >> t_case ;
    getchar() ;
    for(i = 1 ; i <= t_case ; i++)
    {

        while(gets(str))
        {
            if(str[0] == '\0')
            {
                if(i != t_case)
                    cout << endl ;
                break ;
            }
            int len = strlen(str) ;
            for(j = 0 ; j < len ; j++)
            {
                if(str[j] == '1')
                {
                    cout << "I" ;
                }
                else if(str[j] == '2')
                {
                    cout << "Z" ;
                }
                else if(str[j] == '3')
                {
                    cout << "E" ;
                }
                else if(str[j] == '4')
                {
                    cout << "A" ;
                }
                else if(str[j] == '5')
                {
                    cout << "S" ;
                }
                else if(str[j] == '6')
                {
                    cout << "G" ;
                }
                else if(str[j] == '7')
                {
                    cout << "T" ;
                }
                else if(str[j] == '8')
                {
                    cout << "B" ;
                }
                else if(str[j] == '9')
                {
                    cout << "P" ;
                }
                else if(str[j] == '0')
                {
                    cout << "O" ;
                }
                else
                {
                    cout << str[j] ;
                }
            }
            cout << endl ;
        }
    }
    return 0;
}
