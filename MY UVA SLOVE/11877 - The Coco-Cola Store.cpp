#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,n;
    while(1)
    {
        cin>>n;
        sum=0;
        if(n==0)
        {
            break;
        }
        while(n>=3)
        {
            a=n/3;
            b=n%3;
            n=a+b;
            sum=sum+a;
            if(n==2)
            {
                n=n+1;
            }
        }
        cout<<sum<<endl;

    }
    return 0;

}
