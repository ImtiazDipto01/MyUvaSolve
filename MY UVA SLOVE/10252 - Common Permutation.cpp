#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <map>
#include <vector>


using namespace std;

int a[10000],b[10000];

int main()
{
    int i,j,k,t_case,len,len2,index,sum;
    char s[10000],s1[10000];

    while(gets(s))
    {
        gets(s1);
        len = strlen(s) ;
        len2 = strlen(s1) ;
        index = 0 ;
        for(i = 0 ; i < len ; i++)
        {
            for(j = 0 ; j < len2 ; j++)
            {
                sum = s[i] ;
                if(s[i] == s1[j])
                {
                    a[index++] = sum ;
                    s1[j] = -1 ;
                    break ;
                }
            }
        }
        sort(a,a+index);
        for(i = 0 ; i < index ; i++)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
