#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i,l,w,h;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>l>>w>>h;
        if(l<=20&&w<=20&&h<=20)
        {
            printf("Case %d: good\n",i);
        }
        else
        {
            printf("Case %d: bad\n",i);
        }
    }
    return 0;
}
