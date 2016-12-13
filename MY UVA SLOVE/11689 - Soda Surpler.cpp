#include<iostream>
using namespace std;
int main()
{
    int t,pd,td,eb,i,r,a,b,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        cin>>pd>>td>>eb;
        r=pd+td;
        while(r>=eb)
        {
            a=r/eb;
            b=r%eb;
            r=a+b;
            sum=sum+a;
        }
        cout<<sum<<endl;
    }
    return 0;
}
