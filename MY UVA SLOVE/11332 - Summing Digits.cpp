#include<iostream>
using namespace std ;
int main()
{
    int sum,n,rem,d,e,i;
    while(1)
     {
     cin>>n;
     if(n==0)
     {
         break;
     }
    sum=0 ;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }

    if(sum>9)
    {
        d=sum;
        sum=0;
        while(d>0)
        {
            rem=d%10;
            sum=sum+rem;
            d=d/10;
        }

    }
    if(sum>9)
    {
        e=sum;
        sum=0;
        while(e>0)
        {
            rem=e%10;
            sum=sum+rem;
            e=e/10;
        }

    }
    cout<<sum<<endl;
    }
    return 0;
}
