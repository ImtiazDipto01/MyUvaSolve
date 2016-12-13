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
    long long int i,j,k,t_case,input,temp,rev,a[100],count;

    cin >> t_case;
    for(i = 1; i <= t_case; i++)
    {
        cin >> input;

        input = input * 567 ;
        input = input / 9 ;
        input = input + 7492 ;
        input = input * 235 ;
        input = input / 47 ;
        input = input - 498 ;

        temp = input ;
        count = 0;
        while(1)
        {
            rev = temp % 10;
            temp = temp / 10;
            count++ ;
            if(temp == 0)
            {
                break;
            }
            if(count == 2)
            {
                break;
            }
        }
        if(count == 1)
        {
            printf("0\n");
        }
        else if(count == 2)
        {
            if(rev < 0)
            {
                rev = (rev * (-1)) ;
            }
            printf("%lld\n",rev);
        }
    }
    return 0;
}

