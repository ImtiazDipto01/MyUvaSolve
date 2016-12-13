#include<iostream>
#include<stdio.h>
using namespace std;
  int main()
{
     long long int a,b,c,d;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
      c=0;
      d=0;

         if(a>=b)
        {
            c=a-b;
            printf("%lld\n",c);
        }
        else if(a<b)
        {
            d=b-a;
           printf("%lld\n",d);
        }
    }
    return 0;
}
