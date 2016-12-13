#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int a,b,c;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if((a+b)<=c||(b+c)<=a||(a+c)<=b)
        {
            printf("Case %d: Invalid\n",i);
        }
        else if(a==b&&b==c)
        {
            printf("Case %d: Equilateral\n",i);
        }
        else if(a==b||b==c||a==c)
        {
            printf("Case %d: Isosceles\n",i);
        }
        else if(a!=b&&b!=c)
        {
            printf("Case %d: Scalene\n",i);
        }

    }
    return 0;
}
