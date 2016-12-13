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

int a[100];

int main()
{
    int i,j,k,t_case,len,sum,temp,count=0,max=0;
    char s[10000];
    cin>>t_case;
    gets(s);
    while(gets(s))
    {
        count++;
        len=strlen(s);
        for(i=0;i<len;i++)
        {
            if(s[i]=='A'||s[i]=='a')
            {
                a[65]++;
            }
            else if(s[i]=='B'||s[i]=='b')
            {
                a[66]++;
            }
            else if(s[i]=='C'||s[i]=='c')
            {
                a[67]++;
            }
            else if(s[i]=='D'||s[i]=='d')
            {
                a[68]++;
            }
            else if(s[i]=='E'||s[i]=='e')
            {
                a[69]++;
            }
            else if(s[i]=='F'||s[i]=='f')
            {
                a[70]++;
            }
            else if(s[i]=='G'||s[i]=='g')
            {
                a[71]++;
            }
            else if(s[i]=='H'||s[i]=='h')
            {
                a[72]++;
            }
            else if(s[i]=='I'||s[i]=='i')
            {
                a[73]++;
            }
            else if(s[i]=='J'||s[i]=='j')
            {
                a[74]++;
            }
            else if(s[i]=='K'||s[i]=='k')
            {
                a[75]++;
            }
            else if(s[i]=='L'||s[i]=='l')
            {
                a[76]++;
            }
            else if(s[i]=='M'||s[i]=='m')
            {
                a[77]++;
            }
            else if(s[i]=='N'||s[i]=='n')
            {
                a[78]++;
            }
            else if(s[i]=='O'||s[i]=='o')
            {
                a[79]++;
            }
            else if(s[i]=='P'||s[i]=='p')
            {
                a[80]++;
            }
            else if(s[i]=='Q'||s[i]=='q')
            {
                a[81]++;
            }
            else if(s[i]=='R'||s[i]=='r')
            {
                a[82]++;
            }
            else if(s[i]=='S'||s[i]=='s')
            {
                a[83]++;
            }
            else if(s[i]=='T'||s[i]=='t')
            {
                a[84]++;
            }
            else if(s[i]=='U'||s[i]=='u')
            {
                a[85]++;
            }
            else if(s[i]=='V'||s[i]=='v')
            {
                a[86]++;
            }
            else if(s[i]=='W'||s[i]=='w')
            {
                a[87]++;
            }
            else if(s[i]=='X'||s[i]=='x')
            {
                a[88]++;
            }
            else if(s[i]=='Y'||s[i]=='y')
            {
                a[89]++;
            }
            else if(s[i]=='Z'||s[i]=='z')
            {
                a[90]++;
            }
        }
        if(count==t_case)
        {
            break;
        }
    }
    for(i=65;i<=90;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

    }
    for(i=max;i>=1;i--)
    {
        for(j=65;j<=90;j++)
        {
            if(i==a[j])
            {
                printf("%c %d\n",j,a[j]);
            }
        }
    }
    return 0;
}

