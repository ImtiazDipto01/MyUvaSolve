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
    int i,j,k,t_case,len,len2,count,temp,temp2;
    char a[100000], s[100000];
    while(scanf("%s",&a)==1)
    {
        scanf("%s",&s);
        len=strlen(a);
        len2=strlen(s);
        j=temp=temp2=count=0;
        for(i=temp;i<len2;i++)
        {
            if(s[i]==a[j])
            {
                j++;
                count++;
            }
        }
        if(count==len)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
