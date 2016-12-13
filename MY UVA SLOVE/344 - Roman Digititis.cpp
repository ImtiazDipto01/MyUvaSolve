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

long int a[10];

void counter(int n)
{
    if(n == 1)
    {
        a[1]++;
    }
    else if(n == 2)
    {
        a[1]+=2;
    }
    else if(n == 3)
    {
        a[1]+=3;
    }
    else if(n == 4)
    {
        a[1]+=1;
        a[2]+=1;
    }
    else if(n == 5)
    {
        a[2]+=1;
    }
    else if(n == 6)
    {
        a[1]+=1;
        a[2]+=1;
    }
    else if(n == 7)
    {
        a[1]+=2;
        a[2]+=1;
    }
    else if(n == 8)
    {
        a[1]+=3;
        a[2]+=1;
    }
    else if(n == 9)
    {
        a[1]+=1;
        a[3]+=1;
    }
}


int main()
{
    long int i,j,k,t_case,input,temp;
    while(scanf("%ld",&input)==1)
    {

        memset(a,0,sizeof(a));

        if(input == 0)
            break;

        for(i = 1; i <= input; i++)
        {
            if(i < 10)
            {
                counter(i);
            }
            else if(i == 10)
            {
                a[3]+=1;
            }
            else if(i > 10 && i < 20)
            {
                temp = i - 10 ;
                a[3]+=1;
                counter(temp);
            }
            else if(i == 20)
            {
                a[3]+=2;
            }
            else if(i > 20 && i < 30)
            {
                temp = i - 20 ;
                a[3]+=2;
                counter(temp);
            }
            else if(i == 30)
            {
                a[3]+=3;
            }
            else if(i > 30 && i < 40)
            {
                temp = i - 30 ;
                a[3]+=3;
                counter(temp);
            }
            else if(i == 40)
            {
                a[3]+=1;
                a[4]+=1;
            }
            else if(i > 40 && i < 50)
            {
                temp = i - 40 ;
                a[3]+=1;
                a[4]+=1;
                counter(temp);
            }
            else if(i == 50)
            {
                a[4]+=1;
            }
            else if(i > 50 && i < 60)
            {
                temp = i - 50 ;
                a[4]+=1;
                counter(temp);
            }
            else if(i == 60)
            {
                a[4]+=1;
                a[3]+=1;
            }
            else if(i > 60 && i < 70)
            {
                temp = i - 60 ;
                a[4]+=1;
                a[3]+=1;
                counter(temp);
            }
            else if(i == 70)
            {
                a[4]+=1;
                a[3]+=2;
            }
            else if(i > 70 && i < 80)
            {
                temp = i - 70 ;
                a[4]+=1;
                a[3]+=2;
                counter(temp);
            }
            else if(i == 80)
            {
                a[4]+=1;
                a[3]+=3;
            }
            else if(i > 80 && i < 90)
            {
                temp = i - 80 ;
                a[4]+=1;
                a[3]+=3;
                counter(temp);
            }
            else if(i == 90)
            {
                a[5]+=1;
                a[3]+=1;
            }
            else if(i > 90 && i < 100)
            {
                temp = i - 90 ;
                a[5]+=1;
                a[3]+=1;
                counter(temp);
            }
            else if(i == 100)
            {
                a[5]+=1;
            }
        }
        printf("%ld: %ld i, %ld v, %ld x, %ld l, %ld c\n",input,a[1],a[2],a[3],a[4],a[5]);
    }
    return 0;
}
