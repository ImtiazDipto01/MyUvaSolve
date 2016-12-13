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


using namespace std;

int main()
{
    int i,j,k,t_case,f1,f2,money,dif,tmp;
    int f1_money ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        dif = 0 ;
        cin >> f1 >> f2 >> money ;
        dif = f1 - f2 ;
        tmp = f1 + f2 ;
        f1_money = (money * (f1 + dif));
        f1_money = (f1_money / tmp) ;
        if(f1_money < 0)
        {
            f1_money = 0 ;
            cout << f1_money << endl ;
        }
        else
        {
            cout << f1_money << endl ;
        }
    }
    return 0;
}
