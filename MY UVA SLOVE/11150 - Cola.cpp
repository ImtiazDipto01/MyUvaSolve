#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,sum,n;
        while(scanf("%d",&n)==1)
        {
            int sum = n;
            while(n>=3)
            {
               a=n/3;
               b=n%3;
               n=a+b;
               sum=sum+a;
            }

               if(n==2)
               {
                  sum=sum+1;
               }

        cout<<sum<<endl;

        }

    return 0;

}
