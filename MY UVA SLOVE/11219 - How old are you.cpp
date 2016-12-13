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
    int i,j,k,t_case,cd,cm,cy,bd,bm,by,ans;
    cin >> t_case ;
    for(i = 1 ; i <= t_case ; i++)
    {
        scanf("%d/%d/%d",&cd,&cm,&cy);
        scanf("%d/%d/%d",&bd,&bm,&by);
        ans = cy - by ;
        if(ans < 0)
        {
            printf("Case #%d: Invalid birth date\n",i) ;
        }
        else if(ans == 0)
        {
            if(cm < bm)
            {
                printf("Case #%d: Invalid birth date\n",i) ;
            }
            else if(cm > bm)
            {
                printf("Case #%d: %d\n",i,ans) ;
            }
            else if(cm == bm)
            {
                if(cd < bd)
                {
                    printf("Case #%d: Invalid birth date\n",i) ;
                }
                else if(cd == bd)
                {
                    printf("Case #%d: %d\n",i,ans) ;
                }
                if(cd > bd)
                {
                    printf("Case #%d: %d\n",i,ans) ;
                }
            }
        }
        else if(ans > 0)
        {
            if(cm > bm)
            {
                if(ans > 130)
                {
                    printf("Case #%d: Check birth date\n",i);
                }
                else
                {
                    printf("Case #%d: %d\n",i,ans) ;
                }
            }
            else if(cm < bm)
            {
                ans--;
                if(ans > 130)
                {
                    printf("Case #%d: Check birth date\n",i);
                }
                else
                {
                    printf("Case #%d: %d\n",i,ans) ;
                }
            }
            else if(cm == bm)
            {
                if(cd >= bd)
                {

                    if(ans > 130)
                    {
                         printf("Case #%d: Check birth date\n",i);
                    }
                    else
                    {
                         printf("Case #%d: %d\n",i,ans) ;
                    }
                }
                else if(cd < bd)
                {
                    ans--;
                    if(ans > 130)
                    {
                        printf("Case #%d: Check birth date\n",i);
                    }
                    else
                    {
                        printf("Case #%d: %d\n",i,ans) ;
                    }
                }
            }
        }
    }
    return 0;
}

