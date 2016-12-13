#include<iostream>
#include<stdio.h>
using namespace std ;

int main()
{
    long int a,b,c,d,e,t,i;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        d=0;
        cin>>a>>b>>c;
        if(a>b||a>c)
    {
        if(d==0)
        {
            d=a;
        }
        else
        {
            e=a;
        }
    }
    if(b>a||b>c)
    {
        if(d==0)
        {
            d=b;
        }
        else
        {
            e=b;
        }
    }
    if(c>a||c>b)
    {
        if(d==0)
        {
            d=c;
        }
        else
        {
            e=c;
        }
    }
    if(d>e)
    {
        printf("Case %ld: %ld\n",i,e);
    }
    else if(e>d)
    {
        printf("Case %ld: %ld\n",i,d);
    }

 }


    return 0;

}
