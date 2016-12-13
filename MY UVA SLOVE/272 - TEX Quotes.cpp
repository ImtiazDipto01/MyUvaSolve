#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int i,j,k,t_case,len,count=0;
    char d[1000],c[3];
    c[0]='\'';
    c[1]='\'';
    c[2]='`';
    c[3]='`';
    while(gets(d))
    {
        len=strlen(d);
        for(i=0;i<len;i++)
        {
            if(d[i]=='"')
            {
                count++;
                if(count%2==0)
                {
                    printf("%c%c",c[0],c[1]);
                }
                if(count%2!=0)
                {
                    printf("%c",c[2]);
                    printf("%c",c[2]);
                }

            }
            else
            {
                printf("%c",d[i]);
            }

        }
        printf("\n");
    }
    return 0;
}
