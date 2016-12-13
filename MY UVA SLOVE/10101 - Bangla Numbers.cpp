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

int main()
{
    int i,j,k,t_case,count = 0,temp,a[1000],b[1000],visit,count2;
    string s ;
    while(cin >> s)
    {
        count++;
        reverse(s.begin(),s.end()) ;
        count2 = 0 ;
        int len = s.length() ;
        printf("%4d. ",count);
        for(i = 0 ; i < len ; i++)
        {
            temp = s[i] ;
            temp = temp - 48 ;
            a[i] = temp ;
        }
        b[1] = b[2] = -1 ;
        for(i = len - 1 ; i >= 0 ; i--)
        {
            if(i == 0)
            {
                b[2] = a[i] ;
                if(b[1] > 0 && b[2] > 0 || b[1] > 0 && b[2] == 0)
                {
                    if(count2 == 0)
                    {
                        printf("%d%d",b[1],b[2]);
                        count2++ ;
                    }
                    else
                    {
                        printf(" %d%d",b[1],b[2]);
                        count2++ ;
                    }

                }
                if(b[1] == 0 && b[2] > 0 || b[1] == -1 && b[2] >= 0)
                {
                    if(count2 == 0)
                    {
                        printf("%d",b[2]);
                        count2++ ;
                    }
                    else
                    {
                        printf(" %d",b[2]);
                        count2++ ;
                    }
                }
                b[1] = -1 ;
                b[2] = -1 ;
            }
            if(i == 1)
            {
                b[1] = a[i] ;
            }
            if(i == 2 || i == 9)
            {
                if(a[i] > 0)
                {
                    if(count2 == 0)
                    {
                        printf("%d shata",a[i]) ;
                        count2++ ;
                    }
                    else
                    {
                        printf(" %d shata",a[i]) ;
                        count2++ ;
                    }
                }
                b[1] = -1 ;
                b[2] = -1 ;
            }
            if(i == 3 || i == 10)
            {
                b[2] = a[i] ;
                if(b[1] > 0 && b[2] > 0 || b[1] > 0 && b[2] == 0)
                {
                   if(count2 == 0)
                   {
                       printf("%d%d hajar",b[1],b[2]) ;
                       count2++ ;
                   }
                   else
                   {
                       printf(" %d%d hajar",b[1],b[2]) ;
                       count2++ ;
                   }
                }
                if(b[1] == 0 && b[2] > 0 || b[1] == -1 && b[2] > 0)
                {
                    if(count2 == 0)
                    {
                        printf("%d hajar",b[2]) ;
                        count2++ ;
                    }
                    else
                    {
                        printf(" %d hajar",b[2]) ;
                        count2++ ;
                    }
                }
                b[1] = -1 ;
                b[2] = -1 ;
            }
            if(i == 4 || i == 11)
            {
                b[1] = a[i] ;
            }
            if(i == 5 || i == 12)
            {
                b[2] = a[i] ;
                if(b[1] > 0 && b[2] > 0 || b[1] > 0 && b[2] == 0)
                {
                    if(count2 == 0)
                    {
                        printf("%d%d lakh",b[1],b[2]) ;
                        count2++ ;
                    }
                    else
                    {
                        printf(" %d%d lakh",b[1],b[2]) ;
                        count2++;
                    }
                }
                if(b[1] == 0 && b[2] > 0 || b[1] == -1 && b[2] > 0)
                {
                    if(count2 == 0)
                    {
                        printf("%d lakh",b[2]) ;
                        count2++;
                    }
                    else
                    {
                        printf(" %d lakh",b[2]) ;
                        count2++;
                    }
                }
                b[1] = -1 ;
                b[2] = -1 ;
            }
            if(i == 6 || i == 13)
            {
                b[1] = a[i] ;
            }
            if(i == 7)
            {
                b[2] = a[i] ;
                if(b[1] > 0 && b[2] > 0 || b[1] > 0 && b[2] == 0)
                {
                    if(count2 == 0)
                    {
                        printf("%d%d kuti",b[1],b[2]);
                        count2 ++ ;
                    }
                    else
                    {
                        printf(" %d%d kuti",b[1],b[2]);
                        count2 ++ ;
                    }
                }
                if(b[1] == 0 && b[2] > 0 || b[1] == -1 && b[2] > 0)
                {
                    if(count2 == 0)
                    {
                        printf("%d kuti",b[2]) ;
                        count2 ++ ;
                    }
                    else
                    {
                        printf(" %d kuti",b[2]) ;
                        count2 ++ ;
                    }
                }
                if(b[1] == 0 && b[2] == 0)
                {
                    printf(" kuti") ;
                }
                b[1] = -1 ;
                b[2] = -1 ;
            }
            if(i == 8)
            {
                b[1] = a[i] ;
            }
            if(i == 14)
            {
                b[1] = a[i] ;
                if(b[1] > 0)
                {
                    visit = 1 ;
                    printf("%d kuti",b[1]);
                    count2++;
                }
                b[1] = -1 ;
                b[2] = -1 ;
            }
        }
        printf("\n") ;
    }
    return 0;
}

