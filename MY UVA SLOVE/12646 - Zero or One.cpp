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
    int i,j,k,t_case,A,B,C;
    while(scanf("%d %d %d",&A,&B,&C)==3)
    {
        if(A==B&&B==C)
        {
            printf("*\n");
        }
        else if(A==B)
        {
            printf("C\n");
        }
        else if(B==C)
        {
            printf("A\n");
        }
        else if(A==C)
        {
            printf("B\n");
        }

    }
    return 0;
}

