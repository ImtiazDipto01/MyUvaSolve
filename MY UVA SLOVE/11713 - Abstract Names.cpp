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

char name[100],name2[100] ;

int main()
{
    int i,j,k,t_case,len1,len2,count ;
    scanf("%d",&t_case) ;
    for(i = 1 ; i <= t_case ; i++)
    {
        scanf("%s",&name) ;
        scanf("%s",&name2) ;
        len1 = strlen(name) ; len2 = strlen(name2) ;
        if(len1 != len2)
        {
            printf("No\n") ;
        }
        else if(len1 == len2)
        {
            k = 0 ;
            count = 0 ;
            for(j = 0 ; j < len1 ; j++)
            {
                if(name[j] == name2[k])
                {
                    count ++ ;
                }
                if(name[j] != name2[k])
                {
                    if(name[j] == 'a' || name[j] == 'e' || name[j] == 'i' || name[j] == 'o' || name[j] == 'u')
                    {
                        if(name2[k] == 'a' || name2[k] == 'e' || name2[k] == 'i' || name2[k] == 'o' || name2[k] == 'u')
                        {
                            count ++ ;
                        }
                    }
                }
                k++ ;
            }
            if(count == len1)
            {
                printf("Yes\n") ;
            }
            else
            {
                printf("No\n") ;
            }
        }
    }
    return 0;
}

