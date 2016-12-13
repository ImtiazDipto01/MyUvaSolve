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

long int a[1000];

int main()
{
    long int i,j,k,t_case,len,max,temp;
    char str[100000];

    while(gets(str))
    {
        memset(a,0,sizeof(a));
        max = 0 ;
        len = strlen(str);
        for(i = 0 ; i < len ; i++)
        {
            temp = str[i] ;
            if(temp >= 65 && temp <= 90 || temp >= 97 && temp <= 122)
            {
                a[temp]++;
                if(a[temp] > max)
                {
                    max = a[temp] ;
                }
            }
        }
        for(i = 65 ; i <= 122 ; i++)
        {
            if(i >= 91 && i <= 96)
                continue ;

            else if(max == a[i])
            {
                printf("%c",i) ;
            }
        }
        printf(" %d\n",max) ;
    }
    return 0;
}
