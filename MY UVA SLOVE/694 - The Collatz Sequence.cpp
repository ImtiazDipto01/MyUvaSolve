#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int a,b,c,d,count,i,j,k,temp,count_test_case=0;
    while(scanf("%lld %lld",&a,&b)==2)
    {
         if(a<0&&b<0)
         {
             break;
         }
         count_test_case++;
         if(a>b)
         {
            temp=a;
            a=b;
            b=temp;
         }
         c=a;
         d=b;
         for(i=a;i<=a;i++)
         {
              count=1;
              k=i;
              while(k>1)
              {
                  if(k%2==0)
                  {
                      k=k/2;
                      if(k>b)
                      {
                          break;
                      }
                      count++;
                  }
                  else if(k%2!=0)
                  {
                       k=3*k+1;
                       if(k>b)
                       {
                           break;
                       }
                       count++;
                  }
              }
          }

          printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",count_test_case,c,d,count);
    }

  return 0;
}


