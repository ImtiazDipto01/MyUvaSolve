#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,i,count,r;
    while(1)
    {
        cin >> a >> b;
        count=0;
        if(a==0&&b==0)
        break;

        for(i=a;i<=b;i++)
        {
            r=sqrt(i);

             if(i==r*r)
            {
            count++;
            }
        }
        cout<<count<<endl;

    }
}
