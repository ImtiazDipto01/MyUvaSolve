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

long long int a[10050] ;

int main()
{
    long long int i,j,k,t_case,n,index = 0,mid,mid2,median;
    while(cin >> n)
    {
        a[index++] = n ;
        sort(a, a + index) ;
        if(index % 2 == 0)
        {
            mid = index / 2 ;
            mid2 = mid - 1 ;
            median = ((a[mid] + a[mid2]) / 2) ;
            cout << median << endl ;
        }
        else
        {
            mid = index / 2 ;
            median = a[mid] ;
            cout << median << endl ;
        }
    }
    return 0;
}

