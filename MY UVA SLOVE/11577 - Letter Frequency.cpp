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

int a[1000];

int main()
{
    int i,j,k,t_case,len,count = 0,max;
    char str[10000];

    cin >> t_case ;
    getchar();
    while(gets(str))
    {
        memset(a,0,sizeof(a));
        count++ ;
        len = strlen(str);
        for(i = 0 ; i < len ; i++)
        {
            if(str[i] == 'A' || str[i] == 'a')
            {
                a[97]++;
            }
            else if(str[i] == 'B' || str[i] == 'b')
            {
                a[98]++;
            }
            else if(str[i] == 'C' || str[i] == 'c')
            {
                a[99]++;
            }
            else if(str[i] == 'D' || str[i] == 'd')
            {
                a[100]++;
            }
            else if(str[i] == 'E' || str[i] == 'e')
            {
                a[101]++;
            }
            else if(str[i] == 'F' || str[i] == 'f')
            {
                a[102]++;
            }
            else if(str[i] == 'G' || str[i] == 'g')
            {
                a[103]++;
            }
            else if(str[i] == 'H' || str[i] == 'h')
            {
                a[104]++;
            }
            else if(str[i] == 'I' || str[i] == 'i')
            {
                a[105]++;
            }
            else if(str[i] == 'J' || str[i] == 'j')
            {
                a[106]++;
            }
            else if(str[i] == 'K' || str[i] == 'k')
            {
                a[107]++;
            }
            else if(str[i] == 'L' || str[i] == 'l')
            {
                a[108]++;
            }
            else if(str[i] == 'M' || str[i] == 'm')
            {
                a[109]++;
            }
            else if(str[i] == 'N' || str[i] == 'n')
            {
                a[110]++;
            }
            else if(str[i] == 'O' || str[i] == 'o')
            {
                a[111]++;
            }
            else if(str[i] == 'P' || str[i] == 'p')
            {
                a[112]++;
            }
            else if(str[i] == 'Q' || str[i] == 'q')
            {
                a[113]++;
            }
            else if(str[i] == 'R' || str[i] == 'r')
            {
                a[114]++;
            }
            else if(str[i] == 'S' || str[i] == 's')
            {
                a[115]++;
            }
            else if(str[i] == 'T' || str[i] == 't')
            {
                a[116]++;
            }
            else if(str[i] == 'U' || str[i] == 'u')
            {
                a[117]++;
            }
            else if(str[i] == 'V' || str[i] == 'v')
            {
                a[118]++;
            }
            else if(str[i] == 'W' || str[i] == 'w')
            {
                a[119]++;
            }
            else if(str[i] == 'X' || str[i] == 'x')
            {
                a[120]++;
            }
            else if(str[i] == 'Y' || str[i] == 'y')
            {
                a[121]++;
            }
            else if(str[i] == 'Z' || str[i] == 'z')
            {
                a[122]++;
            }
        }
        max = 0 ;
        for(i = 97 ; i <= 122 ; i++)
        {
            if(a[i] > max)
            {
                max = a[i] ;
            }
        }
        for(i = 97 ; i <= 122 ; i++)
        {
            if(a[i] == max)
            {
                printf("%c",i);
            }
        }
        printf("\n");
        if(count == t_case)
        {
            break;
        }
    }

    return 0;
}

