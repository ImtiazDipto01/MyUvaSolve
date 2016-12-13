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

int a[1000] ;

int main()
{
    int i,j,k,t_case;
    string name ;
    while(cin >> name)
    {
        int index = 0 ;
        int len = name.length() ;
        for(i = 0 ; i < len ; i++)
        {
            if(name[i] == 'B' || name[i] == 'F' || name[i] == 'P' || name[i] == 'V')
            {
                if(i == 0 ||name[i-1]!='B'&&name[i-1]!='F'&&name[i-1]!='P'&&name[i-1]!='V')
                    a[index++] = 1 ;
            }
            else if(name[i] == 'C' || name[i] == 'G' || name[i] == 'J' || name[i] == 'K' || name[i] == 'Q' || name[i] == 'S' || name[i] == 'X' || name[i] == 'Z')
            {
                if(i == 0 ||name[i-1]!='C'&&name[i-1]!='G'&&name[i-1]!='J'&&name[i-1]!='K'&&name[i-1]!='Q'&&name[i-1]!='S'&&name[i-1]!='X'&&name[i-1]!='Z')
                    a[index++] = 2 ;
            }
            else if(name[i] == 'D' || name[i] == 'T')
            {
                if(i == 0 ||name[i-1]!='D'&&name[i-1]!='T')
                    a[index++] = 3 ;
            }
            else if(name[i] == 'L')
            {
                if(i == 0 ||name[i-1]!='L')
                    a[index++] = 4 ;
            }
            else if(name[i] == 'M' || name[i] == 'N')
            {
                if(i == 0 ||name[i-1]!='M'&&name[i-1]!='N')
                    a[index++] = 5 ;
            }
            else if(name[i] == 'R')
            {
                if(i == 0 ||name[i-1]!='R')
                    a[index++] = 6 ;
            }
        }
        for(i = 0 ; i < index ; i++)
        {
            cout << a[i] ;
        }
        cout << endl ;
    }
    return 0;
}

