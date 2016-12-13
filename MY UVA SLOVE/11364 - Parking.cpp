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
    int i, j, k, t_case, plc, ans, temp, n, tmp;

    scanf("%d",&t_case);

    for(i = 1; i <= t_case; i++)
    {
        scanf("%d",&plc);

        for(j = 0; j < plc; j++)
        {
            scanf("%d",&n);
            a[j] = n ;
        }
        sort(a, a + plc);
        ans = 0;
        for(j = 0; j < plc; j++)
        {
            if(j == (plc - 1))
            {
                temp = (a[j] - a[0]) ;
                tmp = abs(temp);
                ans += tmp ;
                break;
            }
            temp = (a[j] - a[j+1]) ;
            tmp = abs(temp);
            ans += tmp ;
        }

        printf("%d\n",ans);
    }
    return 0;
}
