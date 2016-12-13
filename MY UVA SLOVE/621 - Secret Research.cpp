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
    int i,j,k,t_case,count=0,len;
    char a[1000];
    cin>>t_case;
    while(scanf("%s",&a)==1)
    {
        count++;
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]=='7'&&a[i+1]=='8'&&len==2)
            {
                printf("+\n");
                break;
            }
            else if(a[i]=='4'&&len==1)
            {
                printf("+\n");
                break;
            }
            else if(a[i]=='1'&&len==1)
            {
                printf("+\n");
                break;
            }
            else if(a[len-2]=='3'&&a[len-1]=='5'&&a[len]=='\0')
            {
                printf("-\n");
                break;
            }
            else if(a[i]=='9'&&a[len-1]=='4'&&a[len]=='\0')
            {
                printf("*\n");
                break;
            }
            else if(a[i]=='1'&&a[i+1]=='9'&&a[i+2]=='0'&&a[len-1]!='5')
            {
                printf("?\n");
                break;
            }
        }
        if(t_case==count)
        {
            break;
        }
    }

    return 0;
}
