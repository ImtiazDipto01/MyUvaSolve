#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int input,sum,i;
    while((scanf("%d",&input))==1)
    {
         sum=0;
      for(i=1;i<=input;i++)
      {
          sum=sum+(i*i*i);
      }
    cout<<sum<<endl;
    }

}
