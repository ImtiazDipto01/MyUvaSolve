#include<iostream>
#include<stdio.h>
using namespace std ;

int main()
{
    int n,k,sum,a,b,sum2;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        sum=0;
        sum=sum+n;
        sum2=0;
        while(n>=k)
        {
            a=n/k;
            b=n%k;
            n=a+b;
            sum2=sum2+a;

        }
        cout<<sum2+sum<<endl;
    }
    return 0;
}
