#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,t,pl,ps,k,count,r;
  cin>>t;
  for(i=1;i<=t;i++)
  {
      cin>>pl>>k>>ps;
      count = -1;
      for(j=k;j<=pl;j++)
      {
          count++;
          if(count==ps)
          {
              printf("Case %d: %d\n",i,j);
              break;
          }
          if(j==pl)
          {
              j=0;
          }
      }

  }
  return 0;
}
