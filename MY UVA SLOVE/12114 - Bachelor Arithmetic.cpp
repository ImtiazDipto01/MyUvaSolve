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
    long long int i,j,k,t_case,b,s;
    for(i=1;;i++)
    {
        cin>>b>>s;
        if(b==0&&s==0)
        {
            break;
        }
        if(b>s)
        {
            printf("Case %lld: :-(\n",i);
        }
        else if(b==1||b==0)
        {
            cout<<"Case "<<i<<": :-\\"<<endl;
        }
        else if(b<=s)
        {
            printf("Case %lld: :-|\n",i);
        }
    }
    return 0;
}

