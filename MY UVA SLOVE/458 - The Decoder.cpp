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
    int i,j,k,t_case,len;
    char s[1000];
    while(scanf("%s",&s)==1)
    {
        len=strlen(s);
        for(i=0;i<len;i++)
        {
            printf("%c",s[i]-7);
        }
        printf("\n");
    }
    return 0;
}
