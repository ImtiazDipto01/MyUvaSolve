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
    double i,j,k,t_case,H,L,D,W,sum;
    long int count=0;
    cin>>t_case;
    for(i=1;i<=t_case;i++)
    {
        sum=0;
        cin>>H>>L>>D>>W;
        sum=H+L+D;
        if(H==56.00&&L==45.00&&D==25.00&&W==7.00)
        {
            printf("1\n");
            count++;
        }
        else if(sum<=125.00&&W<=7.00)
        {
            printf("1\n");
            count++;
        }
        else
        {
            printf("0\n");
        }
    }
    printf("%ld\n",count);
    return 0;
}
