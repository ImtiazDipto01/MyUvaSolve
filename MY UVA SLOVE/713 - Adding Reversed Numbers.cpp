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
#define size 500

using namespace std;

int output[size] ;

int main()
{
    int i,j,k,t_case,len1,len2,tmp,a,b,c,l,index,f,L ;
    string s1 , s2 ;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        cin >> s1 >> s2 ;
        reverse(s1.begin(),s1.end()) ;
        reverse(s2.begin(),s2.end()) ;
        len1 = s1.length() ;
        len2 = s2.length() ;
        l = len2 ;
        L = len1 ;
        L -- ;
        l -- ;
        if(len1 >= len2)
        {
            tmp = 0 ;
            index = 0 ;
            for(j = len1 - 1 ; j >= 0 ; j--)
            {
                f = 0 ;
                a = s1[j] - 48 ;
                b = s2[l] - 48 ;
                if(l >= 0)
                {
                    c = a + b + tmp ;
                }
                if(l < 0)
                {
                    c = a + tmp ;
                }
                if(c > 9 && j != 0)
                {
                    c = c - 10 ;
                    tmp = 1 ;
                    f = 1 ;
                }
                if(c <= 9 && f != 1)
                {
                    tmp = 0 ;
                }
                int n , rev = 0 ;
                n = c ;
                if(j == 0 && c > 9)
                {
                    while(n != 0)
                    {
                       rev = n % 10 ;
                       output[index++] = rev ;
                       n = n / 10 ;
                    }
                }
                else
                {
                    output[index++] = c ;
                }
                l -- ;
            }
        }
        if(len2 > len1)
        {
            tmp = 0 ;
            index = 0 ;
            for(j = len2 - 1 ; j >= 0 ; j--)
            {
                f = 0 ;
                a = s2[j] - 48 ;
                b = s1[L] - 48 ;
                if(L >= 0)
                {
                    c = a + b + tmp ;
                }
                if(L < 0)
                {
                    c = a + tmp ;
                }
                if(c > 9 && j != 0)
                {
                    c = c - 10 ;
                    tmp = 1 ;
                    f = 1 ;
                }
                if(c <= 9 && f != 1)
                {
                    tmp = 0 ;
                }
                int n , rev = 0 ;
                n = c ;
                if(j == 0 && c > 9)
                {
                    while(n != 0)
                    {
                       rev = n % 10 ;
                       output[index++] = rev ;
                       n = n / 10 ;
                    }
                }
                else
                {
                    output[index++] = c ;
                }
                L -- ;
            }
        }
        f = 0 ;
        for(j = 0 ; j < index ; j++)
        {
            if(output[j] == 0 && f == 0)
            {
                continue ;
            }
            else
            {
                cout << output[j] ;
                f = 1 ;
            }
        }
        cout << endl ;
    }
    return 0;
}
