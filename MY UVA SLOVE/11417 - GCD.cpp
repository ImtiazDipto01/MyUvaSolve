#include<iostream>
using namespace std ;

long int gcd(long int a, long int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return a;
}

int main()
{
    long int i,n,sum,j,r;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        sum=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {

              sum+=gcd(i,j);

            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
