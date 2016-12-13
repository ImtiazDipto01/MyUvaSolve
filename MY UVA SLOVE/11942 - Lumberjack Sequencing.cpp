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
    int k,t_case,input,s,B,temp;
    int a,b,c,d,e,f,g,h,i,j;
    while(scanf("%d",&t_case)==1)
    {
        s=0;
        B=0;
        printf("Lumberjacks:\n");
        for(k=1;k<=t_case;k++)
        {
             cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
             if(a>b&&b>c&&c>d&&d>e&&e>f&&f>g&&g>h&&h>i&&i>j)
             {
                 printf("Ordered\n");
             }
             else if(a<b&&b<c&&c<d&&d<e&&e<f&&f<g&&g<h&&h<i&&i<j)
             {
                 printf("Ordered\n");
             }
             else
             {
                 printf("Unordered\n");
             }
        }
    }
    return 0;
}
